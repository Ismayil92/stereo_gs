/********************************************************************************
** Form generated from reading UI file 'main_windowwZ8548.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAIN_WINDOWWZ8548_H
#define MAIN_WINDOWWZ8548_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *lblLeftCamera;
    QLabel *lblRightCamera;
    QLabel *lblDisparity;
    QPushButton *pushButton;
    QPushButton *btnPause;
    QGraphicsView *disparityFrame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *leftFrame;
    QGraphicsView *rightFrame;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *lblMinDisparity;
    QLabel *lblNumDisparities;
    QLabel *lblNumDisparities_2;
    QLabel *lblNumDisparities_3;
    QLabel *lblNumDisparities_4;
    QLabel *lblNumDisparities_5;
    QLabel *lblNumDisparities_6;
    QLabel *lblNumDisparities_7;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QSlider *horizontalSlider_minDisp;
    QSlider *horizontalSlider_numDisp;
    QSlider *horizontalSlider_blockSize;
    QSlider *horizontalSlider_disp12MaxDiff;
    QSlider *horizontalSlider_uniquenessRatio;
    QSlider *horizontalSlider_speckleWindowSize;
    QSlider *horizontalSlider_speckleRange;
    QSlider *horizontalSlider_prefilterCap;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(939, 700);
        MainWindow->setMinimumSize(QSize(939, 618));
        MainWindow->setMaximumSize(QSize(939, 700));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(146, 239, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(200, 247, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(73, 119, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(97, 159, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lblLeftCamera = new QLabel(centralwidget);
        lblLeftCamera->setObjectName(QStringLiteral("lblLeftCamera"));
        lblLeftCamera->setGeometry(QRect(180, 10, 111, 16));
        lblRightCamera = new QLabel(centralwidget);
        lblRightCamera->setObjectName(QStringLiteral("lblRightCamera"));
        lblRightCamera->setGeometry(QRect(680, 10, 111, 16));
        lblDisparity = new QLabel(centralwidget);
        lblDisparity->setObjectName(QStringLiteral("lblDisparity"));
        lblDisparity->setGeometry(QRect(590, 320, 111, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(840, 330, 89, 25));
        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setGeometry(QRect(840, 360, 89, 25));
        disparityFrame = new QGraphicsView(centralwidget);
        disparityFrame->setObjectName(QStringLiteral("disparityFrame"));
        disparityFrame->setGeometry(QRect(350, 340, 456, 279));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 921, 281));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftFrame = new QGraphicsView(layoutWidget);
        leftFrame->setObjectName(QStringLiteral("leftFrame"));

        horizontalLayout->addWidget(leftFrame);

        rightFrame = new QGraphicsView(layoutWidget);
        rightFrame->setObjectName(QStringLiteral("rightFrame"));

        horizontalLayout->addWidget(rightFrame);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 360, 161, 181));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblMinDisparity = new QLabel(layoutWidget1);
        lblMinDisparity->setObjectName(QStringLiteral("lblMinDisparity"));

        verticalLayout->addWidget(lblMinDisparity);

        lblNumDisparities = new QLabel(layoutWidget1);
        lblNumDisparities->setObjectName(QStringLiteral("lblNumDisparities"));

        verticalLayout->addWidget(lblNumDisparities);

        lblNumDisparities_2 = new QLabel(layoutWidget1);
        lblNumDisparities_2->setObjectName(QStringLiteral("lblNumDisparities_2"));

        verticalLayout->addWidget(lblNumDisparities_2);

        lblNumDisparities_3 = new QLabel(layoutWidget1);
        lblNumDisparities_3->setObjectName(QStringLiteral("lblNumDisparities_3"));

        verticalLayout->addWidget(lblNumDisparities_3);

        lblNumDisparities_4 = new QLabel(layoutWidget1);
        lblNumDisparities_4->setObjectName(QStringLiteral("lblNumDisparities_4"));

        verticalLayout->addWidget(lblNumDisparities_4);

        lblNumDisparities_5 = new QLabel(layoutWidget1);
        lblNumDisparities_5->setObjectName(QStringLiteral("lblNumDisparities_5"));

        verticalLayout->addWidget(lblNumDisparities_5);

        lblNumDisparities_6 = new QLabel(layoutWidget1);
        lblNumDisparities_6->setObjectName(QStringLiteral("lblNumDisparities_6"));

        verticalLayout->addWidget(lblNumDisparities_6);

        lblNumDisparities_7 = new QLabel(layoutWidget1);
        lblNumDisparities_7->setObjectName(QStringLiteral("lblNumDisparities_7"));

        verticalLayout->addWidget(lblNumDisparities_7);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(170, 360, 151, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_minDisp = new QSlider(layoutWidget2);
        horizontalSlider_minDisp->setObjectName(QStringLiteral("horizontalSlider_minDisp"));
        horizontalSlider_minDisp->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_minDisp);

        horizontalSlider_numDisp = new QSlider(layoutWidget2);
        horizontalSlider_numDisp->setObjectName(QStringLiteral("horizontalSlider_numDisp"));
        horizontalSlider_numDisp->setMaximum(99);
        horizontalSlider_numDisp->setSliderPosition(64);
        horizontalSlider_numDisp->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_numDisp);

        horizontalSlider_blockSize = new QSlider(layoutWidget2);
        horizontalSlider_blockSize->setObjectName(QStringLiteral("horizontalSlider_blockSize"));
        horizontalSlider_blockSize->setMaximum(18);
        horizontalSlider_blockSize->setSliderPosition(8);
        horizontalSlider_blockSize->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_blockSize);

        horizontalSlider_disp12MaxDiff = new QSlider(layoutWidget2);
        horizontalSlider_disp12MaxDiff->setObjectName(QStringLiteral("horizontalSlider_disp12MaxDiff"));
        horizontalSlider_disp12MaxDiff->setMaximum(18);
        horizontalSlider_disp12MaxDiff->setSliderPosition(1);
        horizontalSlider_disp12MaxDiff->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_disp12MaxDiff);

        horizontalSlider_uniquenessRatio = new QSlider(layoutWidget2);
        horizontalSlider_uniquenessRatio->setObjectName(QStringLiteral("horizontalSlider_uniquenessRatio"));
        horizontalSlider_uniquenessRatio->setMaximum(18);
        horizontalSlider_uniquenessRatio->setSliderPosition(10);
        horizontalSlider_uniquenessRatio->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_uniquenessRatio);

        horizontalSlider_speckleWindowSize = new QSlider(layoutWidget2);
        horizontalSlider_speckleWindowSize->setObjectName(QStringLiteral("horizontalSlider_speckleWindowSize"));
        horizontalSlider_speckleWindowSize->setMaximum(18);
        horizontalSlider_speckleWindowSize->setSliderPosition(10);
        horizontalSlider_speckleWindowSize->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_speckleWindowSize);

        horizontalSlider_speckleRange = new QSlider(layoutWidget2);
        horizontalSlider_speckleRange->setObjectName(QStringLiteral("horizontalSlider_speckleRange"));
        horizontalSlider_speckleRange->setMaximum(18);
        horizontalSlider_speckleRange->setSliderPosition(8);
        horizontalSlider_speckleRange->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_speckleRange);

        horizontalSlider_prefilterCap = new QSlider(layoutWidget2);
        horizontalSlider_prefilterCap->setObjectName(QStringLiteral("horizontalSlider_prefilterCap"));
        horizontalSlider_prefilterCap->setMaximum(99);
        horizontalSlider_prefilterCap->setSliderPosition(31);
        horizontalSlider_prefilterCap->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_prefilterCap);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 939, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "StereoGSCam", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        lblLeftCamera->setText(QApplication::translate("MainWindow", "Left Camera", Q_NULLPTR));
        lblRightCamera->setText(QApplication::translate("MainWindow", "Right Camera", Q_NULLPTR));
        lblDisparity->setText(QApplication::translate("MainWindow", "Disparity", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        btnPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        lblMinDisparity->setText(QApplication::translate("MainWindow", "minDisparity", Q_NULLPTR));
        lblNumDisparities->setText(QApplication::translate("MainWindow", "numDisparities", Q_NULLPTR));
        lblNumDisparities_2->setText(QApplication::translate("MainWindow", "blockSize", Q_NULLPTR));
        lblNumDisparities_3->setText(QApplication::translate("MainWindow", "disp12MaxDiff", Q_NULLPTR));
        lblNumDisparities_4->setText(QApplication::translate("MainWindow", "uniquenessRatio", Q_NULLPTR));
        lblNumDisparities_5->setText(QApplication::translate("MainWindow", "speckleWindowSize", Q_NULLPTR));
        lblNumDisparities_6->setText(QApplication::translate("MainWindow", "speckleRange", Q_NULLPTR));
        lblNumDisparities_7->setText(QApplication::translate("MainWindow", "prefilterCap", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAIN_WINDOWWZ8548_H

