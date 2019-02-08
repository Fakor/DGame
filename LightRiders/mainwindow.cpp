#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow{parent}, board_{16, 16}
{
    setFixedSize(500, 500);
    QVBoxLayout* layout = new QVBoxLayout;

    base::GridBoard board{16, 16};

    board_.SetAllSquareAttribute(EMPTY);

    graphic::GridboardGUI* board_g = new graphic::GridboardGUI(board_, size(), this);

    layout->addWidget(board_g);

    board_g->UpdateBoard();
}


MainWindow::~MainWindow()
{
}
