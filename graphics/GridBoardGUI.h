#pragma once

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QDebug>
#include <QtMath>

#include "../static/GridBoard.h"

namespace graphic {

    class GridboardGUI: public QWidget
	//class GridboardGUI : public QWidget
	{
		Q_OBJECT
	public:
        GridboardGUI(base::GridBoard* board, QSize board_size, QWidget* parent);

	private:
		base::GridBoard* board_;
	};

}
