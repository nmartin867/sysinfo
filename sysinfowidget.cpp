#include "sysinfowidget.h"


#include <QVBoxLayout>

using namespace QtCharts;

SysInfoWidget::SysInfoWidget(QWidget *parent,
                             int startDelay,
                             int updateSeriesDelay) :
    QWidget(parent), mChartView(this)
{
    mRefreshTimer.setInterval(updateSeriesDelay);
    connect(&mRefreshTimer, &QTimer::timeout,
            this, &SysInfoWidget::updateSeries);
    mRefreshTimer.start(startDelay);

    mChartView.chart()->legend()->setVisible(false);

    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->addWidget(&mChartView);
    setLayout(layout);
}

QChartView &SysInfoWidget::chartView()
{
    return mChartView;
}
