#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP
#include <QtGui/QImage>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QGraphicsScene>
#include <QtWidgets/QGraphicsPixmapItem>
#include <QtGui/QPixmap>
#include <QtGui/QCloseEvent>
#include <QtWidgets/QMessageBox>
#include <opencv2/opencv.hpp>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow: public QMainWindow
{   
    Q_OBJECT
    private:
        Ui::MainWindow *ui; 
    public:
        QGraphicsPixmapItem pixmap_left;
        QGraphicsPixmapItem pixmap_right;
        QGraphicsPixmapItem pixmap_disparity;
    private slots:
        void on_horizontalSlider_minDisp_sliderMoved(int position);
        void on_horizontalSlider_numDisp_sliderMoved(int position);
        void on_horizontalSlider_blockSize_sliderMoved(int position);
        void on_horizontalSlider_disp12MaxDiff_sliderMoved(int position);
        void on_horizontalSlider_uniquenessRatio_sliderMoved(int position);
        void on_horizontalSlider_speckleWindowSize_sliderMoved(int position);
        void on_horizontalSlider_speckleRange_sliderMoved(int position);
        void on_horizontalSlider_prefilterCap_sliderMoved(int position);
    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
        void on_pushButton_clicked();
        //void runCamera();
        //void closeEvent(QCloseEvent* event);
    
};

#endif //MAINWINDOW