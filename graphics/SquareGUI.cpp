#include "SquareGUI.h"

namespace  graphic{

    SquareGUI::SquareGUI(base::Square& square, QSize _size)
        :square_{square}
    {
        setFixedSize(_size);
        setFrameStyle(QFrame::Panel | QFrame::Plain);
        setLineWidth(2);
        setAlignment(Qt::AlignCenter);
    }

    void SquareGUI::Update(){
        setText(QString::fromStdString(square_.GetAttributeString()));
    }
}
