#ifndef SYSTEMINFOREADINGSWIDGET_H
#define SYSTEMINFOREADINGSWIDGET_H

#include <QWidget>

namespace Ui {
class SystemInfoReadingsWidget;
}

class SystemInfoReadingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SystemInfoReadingsWidget(QWidget *parent = nullptr);
    ~SystemInfoReadingsWidget();

private:
    Ui::SystemInfoReadingsWidget *ui;
};

#endif // SYSTEMINFOREADINGSWIDGET_H
