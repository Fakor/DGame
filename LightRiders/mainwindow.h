#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QDebug>

#include "../graphics/GridBoardGUI.h"
#include "../static/GridBoard.h"
#include "../static/Attribute.h"

namespace Ui {
class MainWindow;
}

const base::Attribute EMPTY(".");
const base::Attribute WALL("x");

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    base::GridBoard board_;
};

#endif // MAINWINDOW_H
