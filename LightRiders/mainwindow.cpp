#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow{parent}
{
    setFixedSize(500, 500);
    QVBoxLayout* layout = new QVBoxLayout;

    base::GridBoard board{16, 16};

    base::Attribute empty(".");

    board.SetAllSquareAttribute(empty);

    graphic::GridboardGUI* board_g = new graphic::GridboardGUI(&board, size(), this);

    layout->addWidget(board_g);
}


MainWindow::~MainWindow()
{
}
