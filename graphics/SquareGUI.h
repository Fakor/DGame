#ifndef SQUAREGUI_H
#define SQUAREGUI_H

#include <QLabel>
#include <QDebug>

#include <../static/Square.h>

namespace graphic {
    class SquareGUI: public QLabel
    {
        Q_OBJECT
    public:
        SquareGUI(base::Square& square, QSize _size);
    public slots:
        void Update();
    private:
        base::Square& square_;
    };

}

#endif // SQUAREGUI_H
