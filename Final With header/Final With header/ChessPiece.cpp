#include "ChessPiece.h"

ChessPiece :: ChessPiece()
{
    _piece = NOTYPE;
    _color = NONE;
    _row = 0;
    _column = 0;
}

ChessPiece :: ChessPiece(Color c)
{
    _color = c;
}


ChessPiece :: ChessPiece(int row, int column, Color c)
{
    _row = row;
    _column = column;
    _color = c;
}

ChessPiece :: ChessPiece(int row, int column, Piece p, Color c)
{
    _row = row;
    _column = column;
    _piece = p;
    _color = c;
}

int ChessPiece :: getRow()
{
    return _row;
}

int ChessPiece :: getColumn()
{
    return _column;
}

Color ChessPiece :: getColor()
{
    return _color;
}

Piece ChessPiece :: getPiece()
{
    return _piece;
}