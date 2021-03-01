#include "systeminforeadingswidget.h"
#include "ui_systeminforeadingswidget.h"

SystemInfoReadingsWidget::SystemInfoReadingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemInfoReadingsWidget)
{
    ui->setupUi(this);
}

SystemInfoReadingsWidget::~SystemInfoReadingsWidget()
{
    delete ui;
}
