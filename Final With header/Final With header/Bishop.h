#ifndef Bishop_h
#define Bishop_h
#include <iostream>
#include "ChessPiece.h"
#include "ChessBoard.h"
using namespace std;

class ChessBoard;

class Bishop : public ChessPiece
{
private:
    Color _color;
public:
    Bishop(Color c) : ChessPiece(c) { _piece = BISHOP; _color = c; }
    Bishop(int xInitial, int yInitial, Piece p, Color c) : ChessPiece(xInitial, yInitial, p, c) { _color = c; }
    bool checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf);
};

#endif /* Rook_h */
