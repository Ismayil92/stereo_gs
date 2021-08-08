#include "main_window.hpp"
#include "ui_main_window.hpp"
#include "disparity.hpp"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow)
{
        ui->setupUi(this);
        ui->leftFrame->setScene(new QGraphicsScene(this));
        ui->leftFrame->scene()->addItem(&pixmap_left);

        ui->rightFrame->setScene(new QGraphicsScene(this));
        ui->rightFrame->scene()->addItem(&pixmap_right);

        ui->disparityFrame->setScene(new QGraphicsScene(this));
        ui->disparityFrame->scene()->addItem(&pixmap_disparity);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    
}
void MainWindow::on_horizontalSlider_minDisp_sliderMoved(int position)
{
    disparity::minDisparity = position;
    disparity::stereo->setNumDisparities(disparity::minDisparity);
}   
void MainWindow::on_horizontalSlider_numDisp_sliderMoved(int position)
{   
    disparity::numDisparities = position;
    disparity::stereo->setNumDisparities(disparity::numDisparities);
}
void MainWindow::on_horizontalSlider_blockSize_sliderMoved(int position)
{
    disparity::blockSize = position;
    disparity::stereo->setBlockSize(disparity::blockSize);
}
void MainWindow::on_horizontalSlider_disp12MaxDiff_sliderMoved(int position)
{
    disparity::disp12MaxDiff = position;
    disparity::stereo->setDisp12MaxDiff(disparity::disp12MaxDiff);
}
void MainWindow::on_horizontalSlider_uniquenessRatio_sliderMoved(int position)
{
    disparity::uniquenessRatio = position;
    disparity::stereo->setUniquenessRatio(disparity::uniquenessRatio);
}
void MainWindow::on_horizontalSlider_speckleWindowSize_sliderMoved(int position)
{
    disparity::speckleWindowSize = position;
    disparity::stereo->setSpeckleWindowSize(disparity::speckleWindowSize);
}
void MainWindow::on_horizontalSlider_speckleRange_sliderMoved(int position)
{
    disparity::speckleRange = position;
    disparity::stereo->setSpeckleRange(disparity::speckleRange);
}
 void MainWindow::on_horizontalSlider_prefilterCap_sliderMoved(int position)
{
    disparity::preFilterCap = position;
    disparity::stereo->setPreFilterCap(disparity::preFilterCap);
}

/*
void MainWindow::closeEvent(QCloseEvent* event)
{
    if (video.isOpened())
    {
        QMessageBox::warning(this,
            "Warning",
            "Stop the video before closing the application!");
        event->ignore();
    }
    else
    {
        event->accept();
    }
}
*/