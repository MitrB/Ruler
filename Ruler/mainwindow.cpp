#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QCursor>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_TranslucentBackground);

    // init drawnlines
    DrawnLines * lines = new DrawnLines();
    this->initiateDrawnLinesObject(lines);

    //test lines TO BE REMOVED
    Line * l = new Line();
    l->setId(0);
    l->setStart(0, 0);
    l->setEnd(100, 100);
    this->drawnLines->addLine(l);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete drawnLines;
}

void MainWindow::initiateDrawnLinesObject(DrawnLines *d)
{
    this->drawnLines = d;
}

void MainWindow::paintEvent(QPaintEvent * ) {
    // Draw lines
    QPainter painter(this);
    painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));

    auto it = drawnLines->getAllLines()->begin();
    while (it != drawnLines->getAllLines()->end()) {
        Line* l = it->second;
        painter.drawLine(l->getStart()[0], l->getStart()[1], l->getEnd()[0], l->getEnd()[1]);
        ++it;
    }

}

void MainWindow::mousePressEvent(QMouseEvent * e) {
    QWidget::mousePressEvent(e);
    //add beginning of a line
}

void MainWindow::mouseReleaseEvent(QMouseEvent * e) {
    QWidget::mouseReleaseEvent(e);
    //add the ending of a line to the current line
}
