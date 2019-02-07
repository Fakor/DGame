#include "SquareGUI.h"

namespace  graphic{

    SquareGUI::SquareGUI(base::Square& square, QSize _size)
        :square_{square}
    {
        setFixedSize(_size);
        setText(QString::fromStdString(square.GetAttributeString()));
        setFrameStyle(QFrame::Panel | QFrame::Plain);
        setLineWidth(2);
        setAlignment(Qt::AlignCenter);
    }
}
