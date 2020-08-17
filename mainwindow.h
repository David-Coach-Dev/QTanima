#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QPainter"
#include "QPen"
#include "QTimer"
#include "QFileDialog"
#include "QMessageBox"
#include "QThread"
#include "QTime"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_dibujar_clicked();
    void OnTempo();
    void delay();
    void on_bnt_gra_clicked();

private:
    Ui::MainWindow *ui;
    QTimer Tempo;

};
#endif // MAINWINDOW_H
