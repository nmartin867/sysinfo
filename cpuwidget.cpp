#include "cpuwidget.h"
#include "sysinfo.h"

using namespace QtCharts;

CpuWidget::CpuWidget(QWidget* parent) :
    SysInfoWidget(parent),
    mSeries(new QPieSeries(this))
{
    mSeries->setHoleSize(0.35);
    mSeries->append("CPU Load", 30.0);
    mSeries->append("CPU Free", 70.0);

    QChart* chart = chartView().chart();
    chart->addSeries(mSeries);
    chart->setDropShadowEnabled(true);
    chart->setTitle("CPU Load Average");
}

void CpuWidget::updateSeries()
{
    CpuMeasurement measurement;
    double cpuLoadAverage = SysInfo::instance().cpuLoadAverage();
    measurement.load = cpuLoadAverage;
    measurement.free = 100.0 - cpuLoadAverage;
    mSeries->clear();
    mSeries->append("Load", measurement.load );
    mSeries->append("Free", measurement.free);
    emit memoryMeasured(measurement);
}
