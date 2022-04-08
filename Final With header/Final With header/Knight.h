#ifndef Knight_h
#define Knight_h
#include <iostream>
#include "ChessPiece.h"
#include "ChessBoard.h"
using namespace std;

class ChessBoard;

class Knight : public ChessPiece
{
private:
    Color _color;
public:
    Knight(Color c) : ChessPiece(c) { _piece = KNIGHT; _color = c; }
    Knight(int xInitial, int yInitial, Piece p, Color c) : ChessPiece(xInitial, yInitial, p, c) { _color = c; }
    bool checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf);
};

#endif /* Rook_h */
