/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <QSettings>
#include <iostream>
#include "../include/cyrobot_monitor/main_window.hpp"


/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace cyrobot_monitor {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
	, qnode(argc,argv)
{
	ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    //QObject::connect(ui.actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application
    initUis();
    //读取配置文件
    ReadSettings();
    setWindowIcon(QIcon(":/images/robot.png"));
    setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
    //QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));
	/*********************
	** Logging
	**********************/
	ui.view_logging->setModel(qnode.loggingModel());

    /*********************
    ** 自动连接master
    **********************/
    if (m_autoConnect) {
        on_button_connect_clicked(true);
    }
    //链接connect
    connections();

}
//订阅video话题
void MainWindow::initVideos()
{

   QSettings video_topic_setting("video_topic","cyrobot_monitor");
   QStringList names=video_topic_setting.value("names").toStringList();
   QStringList topics=video_topic_setting.value("topics").toStringList();
   if(topics.size()==3)
   {
       if(topics[0]!="")
        qnode.Sub_Image(topics[0],0);
       if(topics[1]!="")
        qnode.Sub_Image(topics[1],1);
       if(topics[2]!="")
        qnode.Sub_Image(topics[2],2);
//       if(topics[3]!="")
//        qnode.Sub_Image(topics[3],3);

   }

   //链接槽函数
   connect(&qnode,SIGNAL(Show_image(int,QImage)),this,SLOT(slot_show_image(int,QImage)));


}
void MainWindow::display_rviz(){
    QSettings settings("cyrobot_monitor","Displays");
    bool Grid_enable = settings.value("Grid/enable",bool(true)).toBool();
    double Grid_count = settings.value("Grid/count",double(20)).toDouble();

    bool Map_enable = settings.value("Map/enable",bool(true)).toBool();
    QString Map_topic = settings.value("Map/topic",QString("/map")).toString();
    double Map_alpha = settings.value("Map/alpha",double(0.7)).toDouble();
    QString Map_scheme = settings.value("Map/scheme",QString("map")).toString();

    bool Laser_enable = settings.value("Laser/enable",bool(true)).toBool();
    QString Laser_topic = settings.value("Laser/topic",QString("/scan")).toString();

    bool Polygon_enable = settings.value("Polygon/enable",bool(true)).toBool();
    QString Polygon_topic = settings.value("Polygon/topic",QString("/move_base/local_costmap/footprint")).toString();

    bool RobotModel_enable = settings.value("RobotModel/enable",bool(true)).toBool();
    bool Navigation_enable= settings.value("Navigation/enable",bool(true)).toBool();
    QString GlobalMap_topic = settings.value("Navigation/GlobalMap/topic",QString("/move_base/global_costmap/costmap")).toString();
    QString GlobalMap_paln = settings.value("Navigation/GlobalPlan/topic",QString("/move_base/NavfnROS/plan")).toString();
    QString LocalMap_topic = settings.value("Navigation/LocalMap/topic",QString("/move_base/local_costmap/costmap")).toString();
    QString LocalMap_plan = settings.value("Navigation/LocalPlan/topic",QString("/move_base/DWAPlannerROS/local_plan")).toString();



    map_rviz->Display_Grid(Grid_enable,"QGrid",Grid_count,QColor(160,160,160));
     map_rviz->Display_Map(Map_enable,Map_topic,Map_alpha,Map_scheme);
     map_rviz->Display_LaserScan(Laser_enable,Laser_topic);
     map_rviz->Display_RobotModel(RobotModel_enable);
     map_rviz->Display_Polygon(Polygon_enable,Polygon_topic);
     map_rviz->Display_Navigate(Navigation_enable,GlobalMap_topic,GlobalMap_paln,LocalMap_topic,LocalMap_plan);
}
void MainWindow::slot_show_image(int frame_id, QImage image)
{
    switch (frame_id)
    {
    case 0:
        ui.label_video0->setPixmap(QPixmap::fromImage(image).scaled(ui.label_video0->width(), ui.label_video0->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        break;
    case 1:
        ui.label_video1->setPixmap(QPixmap::fromImage(image).scaled(ui.label_video1->width(), ui.label_video1->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        break;
    case 2:
        ui.label_video2->setPixmap(QPixmap::fromImage(image).scaled(ui.label_video2->width(), ui.label_video2->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        break;
//    case 3:
//        ui.label_video3->setPixmap(QPixmap::fromImage(image).scaled(ui.label_video3->width(),ui.label_video3->height()));
//        break;
    }
}
//初始化UI
void MainWindow::initUis()
{
    //时间动态显示
    m_timerCurrentTime = new QTimer;
    m_timerCurrentTime->setInterval(100);
    m_timerCurrentTime->start();
    //ui.centralwidget->hide();
    //视图场景加载
    m_qgraphicsScene = new QGraphicsScene;//要用QGraphicsView就必须要有QGraphicsScene搭配着用
    m_qgraphicsScene->clear();
    //创建item
    m_roboMap =new roboMap();
    //视图添加item
    m_qgraphicsScene->addItem(m_roboMap);
    //设置item的坐标原点与视图的原点重合（默认为视图中心）
//    m_roboMap->setPos(100,100);
    //widget添加视图
    ui.mapViz->setScene(m_qgraphicsScene);

    //ui.speed_webView->load(QUrl("file://"+qApp->applicationDirPath()+"/html/gauge-stage.html"));
    ui.horizontalLayout_4->setSpacing(0);
    ui.horizontalLayout_4->setMargin(0);
    ui.label_turnLeft->setPixmap(QPixmap::fromImage(QImage("://images/turnLeft_l.png")));
    ui.label_turnRight->setPixmap(QPixmap::fromImage(QImage("://images/turnRight_l.png")));
    ui.settings_btn->setIcon(QIcon("://images/toolbar_settings1.png"));
    ui.min_btn->setIcon(QIcon("://images/min.png"));
    ui.max_btn->setIcon(QIcon("://images/max.png"));
    ui.close_btn->setIcon(QIcon("://images/close.png"));
    ui.btn_dash->setIcon(QIcon("://images/toolbar_dash.png"));
    ui.btn_map->setIcon(QIcon("://images/toolbar_map.png"));
    ui.btn_control->setIcon(QIcon("://images/status1.png"));
    ui.btn_status->setIcon(QIcon("://images/control.png"));
    ui.btn_other->setIcon(QIcon("://images/toolbar_other.png"));
    ui.widget_rviz->hide();
    rock_widget =new JoyStick(ui.JoyStick_widget);
    rock_widget->show();
    //ui init dashboard
    speedDashBoard=new DashBoard(ui.widget_dashboard);
    speedDashBoard->setGeometry(ui.widget_dashboard->rect());
//    speedDashBoard->
}

void MainWindow::connections()
{
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(slot_rosShutdown()));
    QObject::connect(&qnode, SIGNAL(Master_shutdown()), this, SLOT(slot_rosShutdown()));
    QObject::connect(ui.btn_dash, &QPushButton::clicked, [=](){
        ui.stackedWidget_main->setCurrentIndex(0);
    });
    QObject::connect(ui.btn_control,&QPushButton::clicked,[=](){
      ui.stackedWidget_left->setCurrentIndex(1);
    });
    QObject::connect(ui.btn_status,&QPushButton::clicked,[=](){
      ui.stackedWidget_left->setCurrentIndex(0);
    });
    QObject::connect(ui.btn_map, &QPushButton::clicked, [=](){
        ui.stackedWidget_main->setCurrentIndex(1);
    });
    QObject::connect(ui.btn_other, &QPushButton::clicked, [=](){
        ui.stackedWidget_main->setCurrentIndex(2);
    });
    QObject::connect(m_timerCurrentTime,&QTimer::timeout,[=](){
        ui.label_time->setText(QDateTime::currentDateTime().toString("  hh:mm:ss  "));
    });
    QObject::connect(ui.comboBox_mapType,SIGNAL(currentIndexChanged(int)),this,SLOT(slot_changeMapType(int)));
    //connect速度的信号
    connect(&qnode,SIGNAL(speed_x(double)),this,SLOT(slot_speed_x(double)));
    connect(&qnode,SIGNAL(speed_y(double)),this,SLOT(slot_speed_yaw(double)));
    //电源的信号
    connect(&qnode,SIGNAL(power(float)),this,SLOT(slot_power(float)));
   //绑定slider的函数
   connect(ui.horizontalSlider_raw,SIGNAL(valueChanged(int)),this,SLOT(Slider_raw_valueChanged(int)));
   connect(ui.horizontalSlider_linear,SIGNAL(valueChanged(int)),this,SLOT(Slider_linear_valueChanged(int)));
   //设置界面
   connect(ui.settings_btn,SIGNAL(clicked()),this,SLOT(slot_setting_frame()));
   //打开底层launch文件建图命令
   connect(ui.laser_btn,SIGNAL(clicked()),this,SLOT(slot_quick_cmd_clicked()));
   //绑定速度控制按钮
   connect(ui.pushButton_i,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
   connect(ui.pushButton_u,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
   connect(ui.pushButton_o,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
   connect(ui.pushButton_j,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
   connect(ui.pushButton_l,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
   connect(ui.pushButton_m,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
   connect(ui.pushButton_back,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
   connect(ui.pushButton_backr,SIGNAL(clicked()),this,SLOT(slot_cmd_control()));
   connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(slot_dis_connect()));
   //设置2D Pose
   connect(ui.set_pos_btn,SIGNAL(clicked()),this,SLOT(slot_set_2D_Pos()));
   //设置2D goal
   connect(ui.set_goal_btn,SIGNAL(clicked()),this,SLOT(slot_set_2D_Goal()));
   //设置MoveCamera
   connect(ui.move_camera_btn,SIGNAL(clicked()),this,SLOT(slot_move_camera_btn()));
   //设置Select
   connect(ui.set_select_btn,SIGNAL(clicked()),this,SLOT(slot_set_select()));
   //设置返航点
   connect(ui.set_return_btn,SIGNAL(clicked()),this,SLOT(slot_set_return_point()));
   //返航
   connect(ui.return_btn,SIGNAL(clicked()),this,SLOT(slot_return_point()));
    //刷新话题列表
    connect(ui.refreash_topic_btn,SIGNAL(clicked()),this,SLOT(refreashTopicList()));
    connect(ui.close_btn,SIGNAL(clicked()),this,SLOT(slot_closeWindows()));
    connect(ui.min_btn,SIGNAL(clicked()),this,SLOT(slot_minWindows()));
    connect(ui.max_btn,SIGNAL(clicked()),this,SLOT(slot_maxWindows()));
    connect(rock_widget,SIGNAL(keyNumchanged(int)),this,SLOT(slot_rockKeyChange(int)));
    connect(&qnode,SIGNAL(updateMap(QImage)),m_roboMap,SLOT(paintMaps(QImage)));
    //订阅图像
    connect(&qnode,SIGNAL(image_val(QImage)),this,SLOT(slot_update_image(QImage)));
    connect(ui.pushButton_sub_image,SIGNAL(clicked()),this,SLOT(slot_sub_image()));
    connect(&qnode,SIGNAL(plannerPath(QPolygonF)),m_roboMap,SLOT(paintPlannerPath(QPolygonF)));
    connect(&qnode,SIGNAL(updateRoboPose(QPointF,float)),m_roboMap,SLOT(paintRoboPos(QPointF,float)));
    connect(&qnode,SIGNAL(updateLaserScan(QPolygonF)),m_roboMap,SLOT(paintLaserScan(QPolygonF)));
    connect(m_roboMap,SIGNAL(cursorPos(QPointF)),this,SLOT(slot_updateCursorPos(QPointF)));
    //map
    connect(this,SIGNAL(signalSet2DPose()),m_roboMap,SLOT(slot_set2DPos()));
    connect(this,SIGNAL(signalSet2DGoal()),m_roboMap,SLOT(slot_set2DGoal()));
    connect(this,SIGNAL(signalSetMoveCamera()),m_roboMap,SLOT(slot_setMoveCamera()));
//    connect(ui.stackedWidget_2,SIGNAL())
    //connect仪表盘命令
    connect(&qnode,SIGNAL(speed_vel(float)),this,SLOT(slot_update_dashboard(float)));
}
void MainWindow::slot_update_dashboard(float)
{
    //speedDashBoard->setValue( x *100);
}
void MainWindow::slot_quick_cmd_clicked()
{
    laser_cmd=new QProcess;
    laser_cmd->start("bash");
    laser_cmd->write(ui.textEdit_laser_cmd->toPlainText().toLocal8Bit()+'\n');
    connect(laser_cmd,SIGNAL(readyReadStandardError()),this,SLOT(slot_quick_output()));
    connect(laser_cmd,SIGNAL(readyReadStandardOutput()),this,SLOT(slot_quick_output()));
}
void MainWindow::slot_quick_output()
{
    ui.textEdit_quick_output->append("<font color=\"#FF0000\">"+laser_cmd->readAllStandardError()+"</font>");
    ui.textEdit_quick_output->append("<font color=\"#FFFFFF\">"+laser_cmd->readAllStandardOutput()+"</font>");
}
void MainWindow::slot_update_image(QImage im)
{
//    .scaled(ui.label_video0->width(), ui.label_video0->height(),Qt::KeepAspectRatio, Qt::SmoothTransformation)
//    主窗口图像
   ui.label_image->setPixmap(QPixmap::fromImage(im).scaled(ui.label_video0->width(), ui.label_video0->height(),Qt::KeepAspectRatio, Qt::SmoothTransformation));
}
void MainWindow::slot_sub_image()
{
   qnode.sub_image(ui.lineEdit_image_topic->text());
}
void MainWindow::slot_changeMapType(int index){
  switch (index){
     case 0:
       ui.widget_rviz->hide();
       ui.mapViz->show();
       break;
     case 1:
       ui.mapViz->hide();
       ui.widget_rviz->show();
       if(map_rviz==NULL){
         map_rviz=new QRviz(ui.verticalLayout_rviz,"qrviz");
         display_rviz();
       }

       break;
  }
}
void MainWindow::slot_updateCursorPos(QPointF pos){
      QPointF mapPos=qnode.transScenePoint2Map(pos);
      ui.label_pos_map->setText("x: "+QString::number(mapPos.x()).mid(0,4)+"  y: "+QString::number(mapPos.y()).mid(0,4));
      ui.label_pos_scene->setText("x: "+QString::number(pos.x()).mid(0,4)+"  y: "+QString::number(pos.y()).mid(0,4));
}
void MainWindow::slot_hide_table_widget(){
  if(ui.stackedWidget_left->isHidden()){
    ui.stackedWidget_left->show();
  }
  else{
    ui.stackedWidget_left->hide();
    //ui.table_hide_btn->setStyleSheet("QPushButton{background-image: url(://images/show.png);border:none;}");
  }
}
void MainWindow::initOthers(){
//  line = new QSplineSeries(this);
//    chart = new QChart();
//    chart->addSeries(line);
//    axisX = new QValueAxis(this);
//    axisY = new QValueAxis(this);

//  chartView = new QChartView(ui.widget_chart);
//  chartView->setFixedWidth(ui.widget_chart->width());
//   chartView->setFixedHeight(ui.widget_chart->height());
//  chartView->setRenderHint(QPainter::Antialiasing);
  m_timerChart=new QTimer;
  m_timerPubImageMap=new QTimer;
  m_timerPubImageMap->setInterval(100);
  m_timerChart->setInterval(100);
  connect(m_timerChart,SIGNAL(timeout()),this,SLOT(slot_chartTimerTimeout()));
  connect(m_timerPubImageMap,SIGNAL(timeout()),this,SLOT(slot_pubImageMapTimeOut()));
  m_timerPubImageMap->start();
  m_timerChart->start();
}
void MainWindow::slot_chartTimerTimeout(){
//  QVector<QPointF> list;
//     QVector<QPointF> newlist;
//     list = line->pointsVector();//获取现在图中列表
//     if (list.size() < line_max)
//     {
//         //保持原来
//         newlist = list;
//     }
//     else
//     {
//         //错位移动
//         for(int i =1 ; i< list.size();i++)
//         {
//             newlist.append(QPointF(i-1,list.at(i).y()));
//         }
//     }
//     newlist.append(QPointF(newlist.size(),rand()));//最后补上新的数据
//     line->replace(newlist);//替换更新


//     line->setName("send");//设置曲线名称
//     line->setPen(QColor(255, 0, 0));//设置曲线颜色
//     line->setUseOpenGL(true);//openGl 加速

//     chart->setTitle("Pressure Data");//设置图标标题
//     chart->removeSeries(line);
//     chart->addSeries(line);
//     chart->createDefaultAxes();//设置坐标轴

// //    axisX->setRange(0,line_max);//范围
// //    axisX->setTitleText("times(secs)");//标题
//      axisX->setTickCount(10);//分隔个数
//     axisX->setLineVisible(true);//可视化
//    axisX->setLinePenColor(Qt::blue);//颜色

// //    axisY->setRange(-200,1200);
// //    axisY->setTitleText("value");
// //    axisY->setTickCount(6);
// //    axisY->setLineVisible(true);
// //    axisY->setLinePenColor(Qt::blue);

// //    chart->setAxisX(axisX,line);
// //    chart->setAxisY(axisY,line);

//     chartView->setChart(chart);
}
void MainWindow::slot_pubImageMapTimeOut(){
 QImage image(600,600,QImage::Format_RGB888);
 QPainter painter(&image);
 painter.setRenderHint(QPainter::Antialiasing);
 m_qgraphicsScene->render(&painter);
 qnode.pub_imageMap(image);
}
//设置界面
void MainWindow::slot_setting_frame()
{
    if(set!=NULL)
    {
        delete set;
        set=new Settings();
        set->setWindowModality(Qt::ApplicationModal);
        set->show();
    }
    else{
        set=new Settings();
        set->setWindowModality(Qt::ApplicationModal);
        set->show();
    }
    //绑定set确认按钮点击事件
}
//刷新当前坐标
void MainWindow::slot_position_change(QString frame,double x,double y,double z,double w)
{
    //更新ui显示
//    ui.label_frame->setText(frame);
//    ui.label_x->setText(QString::number(x));
//    ui.label_y->setText(QString::number(y));
//    ui.label_z->setText(QString::number(z));
//    ui.label_w->setText(QString::number(w));
}
//刷新返航地点
void MainWindow::slot_set_return_point()
{
    //更新ui返航点显示
//    ui.label_return_x->setText(ui.label_x->text());
//    ui.label_return_y->setText(ui.label_y->text());
//    ui.label_return_z->setText(ui.label_z->text());
//    ui.label_return_w->setText(ui.label_w->text());
    //写入setting
//    QSettings settings("return-position", "cyrobot_monitor");
//    settings.setValue("x",ui.label_x->text());
//    settings.setValue("y",ui.label_y->text());
//    settings.setValue("z",ui.label_z->text());
//    settings.setValue("w",ui.label_w->text());
    //发出声音提醒
    if(media_player!=NULL)
     {
         delete media_player;
         media_player=NULL;
     }
     media_player=new QSoundEffect;
     media_player->setSource(QUrl::fromLocalFile("://media/refresh_return.wav"));
     media_player->play();

}
//返航
void MainWindow::slot_return_point()
{
    //qnode.set_goal(ui.label_frame->text(),ui.label_return_x->text().toDouble(),ui.label_return_y->text().toDouble(),ui.label_return_z->text().toDouble(),ui.label_return_w->text().toDouble());
    if(media_player!=NULL)
       {
           delete media_player;
           media_player=NULL;
       }
       media_player=new QSoundEffect;
       media_player->setSource(QUrl::fromLocalFile("://media/start_return.wav"));
       media_player->play();
}
//设置导航当前位置按钮的槽函数
void MainWindow::slot_set_2D_Pos()
{
  if(ui.comboBox_mapType->currentIndex()){
    map_rviz->Set_Pos();
  }
  else{
      emit signalSet2DPose();
  }

// ui.label_map_msg->setText("请在地图中选择机器人的初始位置");
}
//设置导航目标位置按钮的槽函数
void MainWindow::slot_set_2D_Goal()
{
  if(ui.comboBox_mapType->currentIndex()){
     map_rviz->Set_Goal();
  }else{
     emit signalSet2DGoal();
  }

//  ui.label_map_msg->setText("请在地图中选择机器人导航的目标位置");
}
void MainWindow::slot_move_camera_btn()
{
    if(ui.comboBox_mapType->currentIndex()){
       map_rviz->Set_MoveCamera();
    }else{
       emit signalSetMoveCamera();
    }

}
void MainWindow::slot_set_select()
{
  if(ui.comboBox_mapType->currentIndex()){
   map_rviz->Set_Select();
  }
}


//左工具栏索引改变
void MainWindow::slot_tab_manage_currentChanged(int index)
{
    switch (index) {
    case 0:

        break;
    case 1:
        break;
    case 2:
        break;

    }
}
//右工具栏索引改变
void MainWindow::slot_tab_Widget_currentChanged(int index)
{
}
void MainWindow::slot_rockKeyChange(int key){
  //速度
  float liner=ui.horizontalSlider_linear->value()*0.01;
  float turn=ui.horizontalSlider_raw->value()*0.01;
  bool is_all=ui.checkBox_use_all->isChecked();
  switch (key) {
      case upleft:
          qnode.move_base(is_all?'U':'u',liner,turn);
      break;
      case up:
          qnode.move_base(is_all?'I':'i',liner,turn);
      break;
      case upright:
          qnode.move_base(is_all?'O':'o',liner,turn);
      break;
      case left:
          qnode.move_base(is_all?'J':'j',liner,turn);
      break;
      case right:
          qnode.move_base(is_all?'L':'l',liner,turn);
      break;
      case down:
          qnode.move_base(is_all?'M':'m',liner,turn);
      break;
      case downleft:
          qnode.move_base(is_all?'<':',',liner,turn);
      break;
      case downright:
          qnode.move_base(is_all?'>':'.',liner,turn);
      break;
  }

}
//速度控制相关按钮处理槽函数
void MainWindow::slot_cmd_control()
{

    QPushButton* btn=qobject_cast<QPushButton*>(sender());
    char key=btn->text().toStdString()[0];
    //速度
    float liner=ui.horizontalSlider_linear->value()*0.01;
    float turn=ui.horizontalSlider_raw->value()*0.01;
    bool is_all=ui.checkBox_use_all->isChecked();
    switch (key) {
        case 'u':
            qnode.move_base(is_all?'U':'u',liner,turn);
        break;
        case 'i':
            qnode.move_base(is_all?'I':'i',liner,turn);
        break;
        case 'o':
            qnode.move_base(is_all?'O':'o',liner,turn);
        break;
        case 'j':
            qnode.move_base(is_all?'J':'j',liner,turn);
        break;
        case 'l':
            qnode.move_base(is_all?'L':'l',liner,turn);
        break;
        case 'm':
            qnode.move_base(is_all?'M':'m',liner,turn);
        break;
        case ',':
            qnode.move_base(is_all?'<':',',liner,turn);
        break;
        case '.':
            qnode.move_base(is_all?'>':'.',liner,turn);
        break;
    }
}
//滑动条处理槽函数
void MainWindow::Slider_raw_valueChanged(int v)
{
    ui.label_raw->setText(QString::number(v));
}
//滑动条处理槽函数
void MainWindow::Slider_linear_valueChanged(int v)
{
    ui.label_linear->setText(QString::number(v));
}
//快捷指令删除按钮
void MainWindow::quick_cmd_remove()
{

}
//快捷指令添加按钮
void MainWindow::quick_cmd_add()
{
//    QWidget *w=new QWidget;
//    //阻塞其他窗体
//    w->setWindowModality(Qt::ApplicationModal);
//    QLabel *name=new QLabel;
//    name->setText("名称:");
//    QLabel *content=new QLabel;
//    content->setText("脚本:");
//    QLineEdit *name_val=new QLineEdit;
//    QTextEdit *shell_val=new QTextEdit;
//    QPushButton *ok_btn=new QPushButton;
//    ok_btn->setText("ok");
//    ok_btn->setIcon(QIcon("://images/ok.png"));
//    QPushButton *cancel_btn=new QPushButton;
//    cancel_btn->setText("cancel");
//    cancel_btn->setIcon(QIcon("://images/false.png"));
//    QHBoxLayout *lay1=new QHBoxLayout;
//    lay1->addWidget(name);
//    lay1->addWidget(name_val);
//    QHBoxLayout *lay2=new QHBoxLayout;
//    lay2->addWidget(content);
//    lay2->addWidget(shell_val);
//    QHBoxLayout *lay3=new QHBoxLayout;
//    lay3->addWidget(ok_btn);
//    lay3->addWidget(cancel_btn);
//    QVBoxLayout *v1=new QVBoxLayout;
//    v1->addLayout(lay1);
//    v1->addLayout(lay2);
//    v1->addLayout(lay3);

//    w->setLayout(v1);
//    w->show();

//    connect(ok_btn,&QPushButton::clicked,[this,w,name_val,shell_val]
//    {
//        this->add_quick_cmd(name_val->text(),shell_val->toPlainText());
//        w->close();
//    });
}
//向treeWidget添加快捷指令
void MainWindow::add_quick_cmd(QString name,QString val)
{
//    if(name=="") return;
//    QTreeWidgetItem *head=new QTreeWidgetItem(QStringList()<<name);
//    QCheckBox *check=new QCheckBox;
//    //记录父子关系
//    this->widget_to_parentItem_map[check]=head;
//    //连接checkbox选中的槽函数
//    connect(check,SIGNAL(stateChanged(int)),this,SLOT(quick_cmds_check_change(int)));
//    QTreeWidgetItem *shell_content=new QTreeWidgetItem(QStringList()<<"shell");
//    QTextEdit *shell_val=new QTextEdit;
//    shell_val->setMaximumWidth(150);
//    shell_val->setMaximumHeight(40);
//    head->addChild(shell_content);
//    shell_val->setText(val);
}
//快捷指令按钮处理的函数
void MainWindow::quick_cmds_check_change(int state)
{

    QCheckBox* check = qobject_cast<QCheckBox*>(sender());
    QTreeWidgetItem *parent=widget_to_parentItem_map[check];
    bool is_checked=state>1?true:false;
    if(is_checked)
    {
        quick_cmd=new QProcess;
        quick_cmd->start("bash");
        connect(quick_cmd,SIGNAL(readyReadStandardOutput()),this,SLOT(cmd_output()));
         connect(quick_cmd,SIGNAL(readyReadStandardError()),this,SLOT(cmd_error_output()));
    }
    else{


    }

}
//执行一些命令的回显
void MainWindow::cmd_output()
{

//    ui.cmd_output->append(quick_cmd->readAllStandardOutput());
}
//执行一些命令的错误回显
void MainWindow::cmd_error_output()
{
//    ui.cmd_output->append("<font color=\"#FF0000\">"+quick_cmd->readAllStandardError()+"</font> ");
}

//析构函数
MainWindow::~MainWindow() {
    if(m_qgraphicsScene)
    {
        delete m_qgraphicsScene;
    }
    if( base_cmd)
    {
        delete base_cmd;
        base_cmd=NULL;
    }
}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/

void MainWindow::showNoMasterMessage() {
	QMessageBox msgBox;
	msgBox.setText("Couldn't find the ros master.");
	msgBox.exec();
    close();
}

/*
 * These triggers whenever the button is clicked, regardless of whether it
 * is already checked or not.
 */
void MainWindow::slot_dis_connect(){
  ros::shutdown();
  slot_rosShutdown();
}
void MainWindow::on_button_connect_clicked(bool check ) {
  ReadSettings();
  QDialog connecting_dia;
  QLabel text_info;
  text_info.setText("连接master中/n "+m_masterUrl+"\n"+m_hostUrl+"\n请稍后.............");
  text_info.setParent(&connecting_dia);
  connecting_dia.resize(300,100);
  connecting_dia.show();
    //如果使用环境变量
  if (m_useEnviorment) {
    if ( !qnode.init() ) {
           connecting_dia.close();
            //showNoMasterMessage();
            QMessageBox::warning(NULL, "失败", "连接ROS Master失败！请检查你的网络或连接字符串！", QMessageBox::Yes , QMessageBox::Yes);
            ui.label_robot_staue_img->setPixmap(QPixmap::fromImage(QImage("://images/offline.png")));
             ui.label_statue_text->setStyleSheet("color:red;");
            ui.label_statue_text->setText("离线");
		} else {
            ui.button_connect->setEnabled(false);
              ui.label_robot_staue_img->setPixmap(QPixmap::fromImage(QImage("://images/online.png")));
              ui.label_statue_text->setStyleSheet("color:green;");
             ui.label_statue_text->setText("在线");
             //初始化视频订阅的显示
             initVideos();
             //显示话题列表
             initTopicList();
             initOthers();
		}
    }
    //如果不使用环境变量
    else {
    if ( ! qnode.init(m_masterUrl.toStdString(),m_hostUrl.toStdString())) {
            connecting_dia.close();
            QMessageBox::warning(NULL, "失败", "连接ROS Master失败！请检查你的网络或连接字符串！", QMessageBox::Yes , QMessageBox::Yes);
            ui.label_robot_staue_img->setPixmap(QPixmap::fromImage(QImage("://images/offline.png")));
            ui.label_statue_text->setStyleSheet("color:red;");
            ui.label_statue_text->setText("离线");
            //showNoMasterMessage();
		} else {
            ui.button_connect->setEnabled(false);
            ui.label_robot_staue_img->setPixmap(QPixmap::fromImage(QImage("://images/online.png")));
            ui.label_statue_text->setStyleSheet("color:green;");
            ui.label_statue_text->setText("在线");
           //初始化视频订阅的显示
           initVideos();
           //显示话题列表
           initTopicList();
           initOthers();
		}
	}

}
void MainWindow::initTopicList()
{
    ui.topic_listWidget->clear();
    ui.topic_listWidget->addItem(QString("%1   (%2)").arg("Name","Type"));
    QMap<QString,QString> topic_list= qnode.get_topic_list();
    for(QMap<QString,QString>::iterator iter=topic_list.begin();iter!=topic_list.end();iter++)
    {
       ui.topic_listWidget->addItem(QString("%1   (%2)").arg(iter.key(),iter.value()));
    }
}
void MainWindow::refreashTopicList()
{
    initTopicList();
}
//当ros与master的连接断开时
void MainWindow::slot_rosShutdown()
{
    ui.label_robot_staue_img->setPixmap(QPixmap::fromImage(QImage("://images/offline.png")));
    ui.label_statue_text->setStyleSheet("color:red;");
    ui.label_statue_text->setText("离线");
    ui.button_connect->setEnabled(true);
}
void MainWindow::slot_power(float p)
{
    ui.label_power->setText(QString::number(p).mid(0,5)+"V");
    double n=(p-10)/1.5;
    int value=n*100;
    ui.progressBar->setValue(value>100?100:value);
    //当电量过低时发出提示
    if(n*100<=20)
    {
         ui.progressBar->setStyleSheet("QProgressBar::chunk {background-color: red;width: 20px;} QProgressBar {border: 2px solid grey;border-radius: 5px;text-align: center;}");
          // QMessageBox::warning(NULL, "电量不足", "电量不足，请及时充电！", QMessageBox::Yes , QMessageBox::Yes);
    }
    else{
        ui.progressBar->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;text-align: center;}");
    }
}
void MainWindow::slot_speed_x(double x)
{
  speedDashBoard->set_speed(abs(x*100));
  QString number=QString::number(abs(x*100)).mid(0,2);
  if(number[1]=="."){
    number=number.mid(0,1);
  }
//  ui.label_speed->setText(number);
//  ui.label_speed_2->setText(number);
//    QString strVal = QString("setDatas(\"%1\");").arg(QString::number(abs(x*100)).mid(0,2));
//    ui.speed_webView->page()->runJavaScript(strVal);
}
void MainWindow::slot_speed_yaw(double yaw)
{
  if(yaw>m_turnLightThre){
      ui.label_turnLeft->setPixmap(QPixmap::fromImage(QImage("://images/turnLeft_hl.png")));
  }
  else if(yaw<-m_turnLightThre){
    ui.label_turnRight->setPixmap(QPixmap::fromImage(QImage("://images/turnRight_hl.png")));
  }
  else{
    ui.label_turnLeft->setPixmap(QPixmap::fromImage(QImage("://images/turnLeft_l.png")));
    ui.label_turnRight->setPixmap(QPixmap::fromImage(QImage("://images/turnRight_l.png")));
  }
}

/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/

/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateLoggingView() {
        ui.view_logging->scrollToBottom();
}

/*****************************************************************************
** Implementation [Menu]
*****************************************************************************/

void MainWindow::on_actionAbout_triggered() {
    //QMessageBox::about(this, tr("About ..."),tr("<h2>PACKAGE_NAME Test Program 0.10</h2><p>Copyright Yujin Robot</p><p>This package needs an about description.</p>"));
}

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

void MainWindow::ReadSettings() {
    QSettings settings("Qt-Ros Package", "cyrobot_monitor");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
    m_masterUrl = settings.value("master_url",QString("http://192.168.2.120:11311/")).toString();
    m_hostUrl = settings.value("host_url", QString("192.168.2.20")).toString();
    m_useEnviorment=settings.value("use_enviorment",bool(false)).toBool();
    m_autoConnect=settings.value("auto_connect",bool(false)).toBool();
    m_turnLightThre=settings.value("lineEdit_turnLightThre",double(0.1)).toDouble();
    //QString topic_name = settings.value("topic_name", QString("/chatter")).toString();
    //ui.line_edit_topic->setText(topic_name);
    QSettings return_pos("return-position","cyrobot_monitor");
//    ui.label_return_x->setText(return_pos.value("x",QString("0")).toString());
//    ui.label_return_y->setText(return_pos.value("y",QString("0")).toString());
//    ui.label_return_z->setText(return_pos.value("z",QString("0")).toString());
//    ui.label_return_w->setText(return_pos.value("w",QString("0")).toString());


}

void MainWindow::WriteSettings() {
  QSettings windows_setting("cyrobot_monitor","windows");
 windows_setting.clear();//清空当前配置文件中的内容
 windows_setting.setValue("WindowGeometry/x",this->x());
 windows_setting.setValue("WindowGeometry/y",this->y());
 windows_setting.setValue("WindowGeometry/width",this->width());
 windows_setting.setValue("WindowGeometry/height",this->height());
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    m_lastPos = event->globalPos();
    isPressedWidget = true; // 当前鼠标按下的即是QWidget而非界面上布局的其它控件
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (isPressedWidget) {
        this->move(this->x() + (event->globalX() - m_lastPos.x()),
                   this->y() + (event->globalY() - m_lastPos.y()));
        m_lastPos = event->globalPos();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    // 其实这里的mouseReleaseEvent函数可以不用重写
    m_lastPos = event->globalPos();
    isPressedWidget = false; // 鼠标松开时，置为false
}
void MainWindow::slot_closeWindows(){
  this->close();
}
void MainWindow::slot_minWindows(){
    this->showMinimized();
}
void MainWindow::slot_maxWindows(){
  if(this->isMaximized()){
    this->showNormal();
  }else{
    this->showMaximized();
  }

}
void MainWindow::closeEvent(QCloseEvent *event)
{

	WriteSettings();
	QMainWindow::closeEvent(event);
}

}  // namespace cyrobot_monitor



