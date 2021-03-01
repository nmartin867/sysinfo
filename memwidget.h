#ifndef MEMWIDGET_H
#define MEMWIDGET_H

#include "sysinfowidget.h"
#include <QObject>
#include <QtCharts/QLineSeries>

class MemWidget : public SysInfoWidget
{
public:
    explicit MemWidget(QWidget* parent = nullptr);

protected slots:
    void updateSeries() override;
private:
    QtCharts::QLineSeries* mSeries;
    qint64 mPointPositionX;
};

#endif // MEMWIDGET_H
