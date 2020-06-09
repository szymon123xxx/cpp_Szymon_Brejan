#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QWidget>

class AnalogClock : public QWidget
{
    Q_OBJECT

public:
    AnalogClock(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    virtual void enterEvent(QEvent *event) ;
    virtual void leaveEvent(QEvent *event) ;
};
#endif // ANALOGCLOCK_H
