/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_7;
    QLineEdit *lineEdit_turnLightThre;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QLineEdit *lineEdit_odm;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_16;
    QLineEdit *lineEdit_power;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *lineEdit_power_min;
    QLabel *label_20;
    QLabel *label_13;
    QLineEdit *lineEdit_power_max;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *line_edit_host;
    QCheckBox *checkbox_remember_settings;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *line_edit_master;
    QCheckBox *checkbox_use_environment;
    QLabel *label_6;
    QLineEdit *line_edit_topic;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_23;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_24;
    QLineEdit *video0_name_set;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_25;
    QLineEdit *video0_topic_set;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_26;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_27;
    QLineEdit *video0_name_set_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_28;
    QLineEdit *video0_topic_set_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_29;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_30;
    QLineEdit *video0_name_set_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_31;
    QLineEdit *video0_topic_set_3;
    QFrame *frame_3;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(402, 639);
        verticalLayout_2 = new QVBoxLayout(Settings);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolBox = new QToolBox(Settings);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 378, 416));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 373, 185));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_18->addWidget(label_7);

        lineEdit_turnLightThre = new QLineEdit(layoutWidget);
        lineEdit_turnLightThre->setObjectName(QStringLiteral("lineEdit_turnLightThre"));

        horizontalLayout_18->addWidget(lineEdit_turnLightThre);


        verticalLayout_5->addLayout(horizontalLayout_18);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_5->addWidget(label_15);

        lineEdit_odm = new QLineEdit(layoutWidget);
        lineEdit_odm->setObjectName(QStringLiteral("lineEdit_odm"));

        horizontalLayout_5->addWidget(lineEdit_odm);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_6->addWidget(label_16);

        lineEdit_power = new QLineEdit(layoutWidget);
        lineEdit_power->setObjectName(QStringLiteral("lineEdit_power"));

        horizontalLayout_6->addWidget(lineEdit_power);

        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_6->addWidget(label_22);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_11->addWidget(label_12);

        lineEdit_power_min = new QLineEdit(layoutWidget);
        lineEdit_power_min->setObjectName(QStringLiteral("lineEdit_power_min"));

        horizontalLayout_11->addWidget(lineEdit_power_min);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_11->addWidget(label_20);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_11->addWidget(label_13);

        lineEdit_power_max = new QLineEdit(layoutWidget);
        lineEdit_power_max->setObjectName(QStringLiteral("lineEdit_power_max"));

        horizontalLayout_11->addWidget(lineEdit_power_max);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_11->addWidget(label_21);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_7->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout_5->addLayout(horizontalLayout_7);

        toolBox->addItem(page, QString::fromUtf8("\350\257\235\351\242\230\350\256\276\347\275\256"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 378, 416));
        verticalLayout_10 = new QVBoxLayout(page_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QStringLiteral("line_edit_host"));

        gridLayout->addWidget(line_edit_host, 3, 0, 1, 2);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QStringLiteral("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_remember_settings, 7, 0, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(100, 32));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 32));
        label_5->setMaximumSize(QSize(100, 32));
        label_5->setFrameShape(QFrame::StyledPanel);
        label_5->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QStringLiteral("line_edit_master"));

        gridLayout->addWidget(line_edit_master, 1, 0, 1, 2);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QStringLiteral("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(checkbox_use_environment, 6, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(100, 32));
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QStringLiteral("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        gridLayout->addWidget(line_edit_topic, 5, 0, 1, 2);


        verticalLayout_10->addWidget(groupBox);

        toolBox->addItem(page_2, QString::fromUtf8("\344\270\273\350\212\202\347\202\271\351\205\215\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 378, 416));
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMaximumSize(QSize(61, 17));

        horizontalLayout_4->addWidget(label_23);

        label_2 = new QLabel(page_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 17));

        verticalLayout_3->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_24 = new QLabel(page_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMaximumSize(QSize(61, 17));

        horizontalLayout_2->addWidget(label_24);

        video0_name_set = new QLineEdit(page_3);
        video0_name_set->setObjectName(QStringLiteral("video0_name_set"));

        horizontalLayout_2->addWidget(video0_name_set);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_25 = new QLabel(page_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMaximumSize(QSize(61, 17));

        horizontalLayout_3->addWidget(label_25);

        video0_topic_set = new QLineEdit(page_3);
        video0_topic_set->setObjectName(QStringLiteral("video0_topic_set"));

        horizontalLayout_3->addWidget(video0_topic_set);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(horizontalLayout_4);

        frame = new QFrame(page_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(30, 0));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(frame);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_26 = new QLabel(page_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMaximumSize(QSize(61, 17));

        horizontalLayout_8->addWidget(label_26);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_27 = new QLabel(page_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMaximumSize(QSize(61, 17));

        horizontalLayout_9->addWidget(label_27);

        video0_name_set_2 = new QLineEdit(page_3);
        video0_name_set_2->setObjectName(QStringLiteral("video0_name_set_2"));

        horizontalLayout_9->addWidget(video0_name_set_2);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_28 = new QLabel(page_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMaximumSize(QSize(61, 17));

        horizontalLayout_10->addWidget(label_28);

        video0_topic_set_2 = new QLineEdit(page_3);
        video0_topic_set_2->setObjectName(QStringLiteral("video0_topic_set_2"));

        horizontalLayout_10->addWidget(video0_topic_set_2);


        verticalLayout_7->addLayout(horizontalLayout_10);


        horizontalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_8);

        frame_2 = new QFrame(page_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(frame_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_29 = new QLabel(page_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMaximumSize(QSize(61, 17));

        horizontalLayout_12->addWidget(label_29);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_30 = new QLabel(page_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMaximumSize(QSize(61, 17));

        horizontalLayout_13->addWidget(label_30);

        video0_name_set_3 = new QLineEdit(page_3);
        video0_name_set_3->setObjectName(QStringLiteral("video0_name_set_3"));

        horizontalLayout_13->addWidget(video0_name_set_3);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_31 = new QLabel(page_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMaximumSize(QSize(61, 17));

        horizontalLayout_14->addWidget(label_31);

        video0_topic_set_3 = new QLineEdit(page_3);
        video0_topic_set_3->setObjectName(QStringLiteral("video0_topic_set_3"));

        horizontalLayout_14->addWidget(video0_topic_set_3);


        verticalLayout_6->addLayout(horizontalLayout_14);


        horizontalLayout_12->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_12);

        frame_3 = new QFrame(page_3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(frame_3);


        verticalLayout_9->addLayout(verticalLayout_8);

        toolBox->addItem(page_3, QStringLiteral("Video"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 378, 416));
        toolBox->addItem(page_4, QString::fromUtf8("\345\205\266\344\273\226\350\256\276\347\275\256"));

        verticalLayout->addWidget(toolBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(Settings);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Settings);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/false.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Settings);

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "\350\256\276\347\275\256", Q_NULLPTR));
        label_7->setText(QApplication::translate("Settings", "\350\275\254\345\220\221\347\201\257\344\272\256\350\265\267\347\232\204yaw\350\247\222\351\230\210\345\200\274:", Q_NULLPTR));
        lineEdit_turnLightThre->setText(QString());
        label_15->setText(QApplication::translate("Settings", "\351\207\214\347\250\213\350\256\241\350\257\235\351\242\230\357\274\232", Q_NULLPTR));
        lineEdit_odm->setText(QApplication::translate("Settings", "raw_odom", Q_NULLPTR));
        label_16->setText(QApplication::translate("Settings", "\347\224\265\346\261\240\347\224\265\351\207\217\350\257\235\351\242\230\357\274\232", Q_NULLPTR));
        lineEdit_power->setText(QApplication::translate("Settings", "power", Q_NULLPTR));
        label_22->setText(QApplication::translate("Settings", "std_msg/Float32", Q_NULLPTR));
        label_12->setText(QApplication::translate("Settings", "\346\234\200\344\275\216\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        lineEdit_power_min->setText(QApplication::translate("Settings", "10", Q_NULLPTR));
        label_20->setText(QApplication::translate("Settings", "V", Q_NULLPTR));
        label_13->setText(QApplication::translate("Settings", "\346\234\200\351\253\230\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        lineEdit_power_max->setText(QApplication::translate("Settings", "11.8", Q_NULLPTR));
        label_21->setText(QApplication::translate("Settings", "V", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "\346\234\272\345\231\250\344\272\272\345\235\220\346\240\207\350\257\235\351\242\230\357\274\232", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Settings", "amcl_pose", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Settings", "\350\257\235\351\242\230\350\256\276\347\275\256", Q_NULLPTR));
        groupBox->setTitle(QString());
        line_edit_host->setText(QApplication::translate("Settings", "192.168.1.67", Q_NULLPTR));
        checkbox_remember_settings->setText(QApplication::translate("Settings", "\346\211\223\345\274\200\350\275\257\344\273\266\346\227\266\350\207\252\345\212\250\350\277\236\346\216\245master", Q_NULLPTR));
        label_4->setText(QApplication::translate("Settings", "\346\234\254\346\234\272IP", Q_NULLPTR));
        label_5->setText(QApplication::translate("Settings", "\344\270\273\350\212\202\347\202\271\345\234\260\345\235\200", Q_NULLPTR));
        line_edit_master->setText(QApplication::translate("Settings", "http://192.168.1.2:11311/", Q_NULLPTR));
        checkbox_use_environment->setText(QApplication::translate("Settings", "\344\275\277\347\224\250\347\216\257\345\242\203\345\217\230\351\207\217", Q_NULLPTR));
        label_6->setText(QApplication::translate("Settings", "Ros Hostname", Q_NULLPTR));
        line_edit_topic->setText(QApplication::translate("Settings", "unused", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("Settings", "\344\270\273\350\212\202\347\202\271\351\205\215\347\275\256", Q_NULLPTR));
        label_23->setText(QApplication::translate("Settings", "Video0:", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Settings", "video0 \350\257\267\350\276\223\345\205\245\345\216\213\347\274\251\345\233\276\345\203\217\350\257\235\351\242\230", Q_NULLPTR));
        label_24->setText(QApplication::translate("Settings", "Name:", Q_NULLPTR));
        video0_name_set->setText(QString());
        label_25->setText(QApplication::translate("Settings", "Topic:", Q_NULLPTR));
        video0_topic_set->setText(QString());
        label_26->setText(QApplication::translate("Settings", "Video1:", Q_NULLPTR));
        label_27->setText(QApplication::translate("Settings", "Name:", Q_NULLPTR));
        video0_name_set_2->setText(QString());
        label_28->setText(QApplication::translate("Settings", "Topic:", Q_NULLPTR));
        video0_topic_set_2->setText(QString());
        label_29->setText(QApplication::translate("Settings", "Video2:", Q_NULLPTR));
        label_30->setText(QApplication::translate("Settings", "Name:", Q_NULLPTR));
        label_31->setText(QApplication::translate("Settings", "Topic:", Q_NULLPTR));
        video0_topic_set_3->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Settings", "Video", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("Settings", "\345\205\266\344\273\226\350\256\276\347\275\256", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Settings", "ok", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Settings", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
