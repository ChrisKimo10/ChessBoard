#ifndef Pawn_h
#define Pawn_h
#include <iostream>
#include "ChessPiece.h"
#include "ChessBoard.h"
using namespace std;

class ChessBoard;

class Pawn : public ChessPiece
{
private:
    Color _color;
public:
    Pawn(Color c) : ChessPiece(c) { _piece = PAWN; _color = c; }
    Pawn(int xInitial, int yInitial, Piece p, Color c) : ChessPiece(xInitial, yInitial, p, c) { _color = c; }
    bool checkPosition(Pawn* p, ChessBoard* cb, int xi, int yi, int xf, int yf);
};

#endif /* Pawn_h */
