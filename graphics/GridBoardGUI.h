#pragma once

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QDebug>
#include <QtMath>

#include "../static/GridBoard.h"
#include "SquareGUI.h"

namespace graphic {

    class GridboardGUI: public QWidget
	{
		Q_OBJECT
	public:
        GridboardGUI(base::GridBoard& board, QSize board_size, QWidget* parent);

    public slots:
        void UpdateBoard();
    signals:
        void SquareUpdate();
	private:
        base::GridBoard& board_;
	};

}
