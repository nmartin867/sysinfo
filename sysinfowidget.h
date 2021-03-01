#ifndef SYSINFOWIDGET_H
#define SYSINFOWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QtCharts/QChartView>
#include <QMap>

class SysInfoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SysInfoWidget(QWidget *parent = nullptr,
                           int startDelay = 500,
                           int updateSeriesDelay = 500);
protected:
    QtCharts::QChartView& chartView();

protected slots:
    virtual void updateSeries() = 0;

private:
    QTimer mRefreshTimer;
    QtCharts::QChartView mChartView;

};

#endif // SYSINFOWIDGET_H
