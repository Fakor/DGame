#include "GridBoardGUI.h"
#include "../static/Attribute.h"

namespace graphic {

    GridboardGUI::GridboardGUI(base::GridBoard* board, QSize board_size, QWidget* parent)
		: QWidget(parent),
		board_{ board }
	{
        setFixedSize(board_size);
		QGridLayout* layout = new QGridLayout(this);

        int cell_height = qCeil(double(size().height()) / board_->GetHeight());
        int cell_width = qCeil(double(size().width()) / board_->GetWidth());
        QSize square_size{ cell_height, cell_width };
		
		for (int i = 0; i < board_->GetWidth(); ++i) {
			for (int j = 0; j < board->GetHeight(); ++j) {
                SquareGUI* square = new SquareGUI(board->GetSquare(i, j), square_size);
                layout->addWidget(square, i, j);
			}
		}
	}

}
