#ifndef Rook_h
#define Rook_h
#include <iostream>
#include "ChessPiece.h"
#include "ChessBoard.h"

using namespace std;

class ChessBoard;

class Rook : public ChessPiece
{
private:
    Color _color;
public:
    Rook(Color c) : ChessPiece(c) { _piece = ROOK; _color = c; }
    Rook(int xInitial, int yInitial, Piece p, Color c) : ChessPiece(xInitial, yInitial, p, c) { _color = c; }
    bool checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf);
};

#endif /* Rook_h */
