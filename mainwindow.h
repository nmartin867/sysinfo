#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cpuwidget.h"
#include "memwidget.h"
#include "systeminforeadingswidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CpuWidget mCpuWidget;
    MemWidget mMemWidget;
    SystemInfoReadingsWidget mReadingsWidget;

};
#endif // MAINWINDOW_H
