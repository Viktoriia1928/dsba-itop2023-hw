#include "customwidget.h"

#include <QPainter>
#include <QPainterPath>

CustomWidget::CustomWidget(QWidget* parent)
    : QWidget(parent)
{
}

void CustomWidget::paintEvent(QPaintEvent* /* event */)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Set the background color
    painter.fillRect(rect(), Qt::white);

    // Create a linear gradient for the background
    QLinearGradient gradient(rect().topLeft(), rect().bottomRight());
    gradient.setColorAt(0, QColor(225, 238, 195));
    gradient.setColorAt(1, QColor(240, 80, 83));
    painter.fillRect(rect(), gradient);

    // Draw the Amazon arrow
    QPainterPath arrowPath;
    arrowPath.moveTo(70, 35);
    arrowPath.lineTo(110, 60);
    arrowPath.lineTo(70, 85);
    arrowPath.lineTo(90, 60);
    arrowPath.lineTo(70, 35);

    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::white);
    painter.drawPath(arrowPath);

    // Draw the Amazon text
    painter.setFont(QFont("Helvetica", 30, QFont::Bold));
    painter.setPen(Qt::white);
    painter.drawText(QRect(30, 80, 120, 80), Qt::AlignCenter, "QtShop");
}
