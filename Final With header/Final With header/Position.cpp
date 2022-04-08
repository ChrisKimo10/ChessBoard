#include "Position.h"

void Position::setPosition(string s)
{
    x = s.at(0);
    y = s.at(1);
}

int Position::setNum()
{
    if (x == "a") { xNum = 0; }
    else if (x == "b") { xNum = 1; }
    else if (x == "c") { xNum = 2; }
    else if (x == "d") { xNum = 3; }
    else if (x == "e") { xNum = 4; }
    else if (x == "f") { xNum = 5; }
    else if (x == "g") { xNum = 6; }
    else if (x == "h") { xNum = 7; }
    else { xNum = 9; }

    if (y == "1") { yNum = 0; }
    else if (y == "2") { yNum = 1; }
    else if (y == "3") { yNum = 2; }
    else if (y == "4") { yNum = 3; }
    else if (y == "5") { yNum = 4; }
    else if (y == "6") { yNum = 5; }
    else if (y == "7") { yNum = 6; }
    else if (y == "8") { yNum = 7; }
    else { yNum = 9; }

    return xNum, yNum;
}

string Position::getPositionX() const
{
    return x;
}

string Position::getPositionY() const
{
    return y;
}

int Position::getXNum() const
{
    return xNum;
}

int Position::getYNum() const
{
    return yNum;
}
