#ifndef TRANSPARENTBACKGROUND_H
#define TRANSPARENTBACKGROUND_H

#include <QWidget>

class TransparentBackground : public QWidget
{
    Q_OBJECT
public:
    explicit TransparentBackground(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private:
    QPoint dragPosition;

signals:

};

#endif // TRANSPARENTBACKGROUND_H
