#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mCpuWidget(this)
    , mMemWidget(this)
    , mReadingsWidget(this)
{
    ui->setupUi(this);
    ui->centralwidget->setLayout(new QHBoxLayout());
    ui->centralwidget->layout()->addWidget(&mCpuWidget);
    ui->centralwidget->layout()->addWidget(&mMemWidget);
    ui->centralwidget->layout()->addWidget(&mReadingsWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


