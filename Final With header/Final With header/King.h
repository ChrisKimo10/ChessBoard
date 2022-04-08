#ifndef King_h
#define King_h
#include <iostream>
#include "ChessPiece.h"
#include "ChessBoard.h"
using namespace std;

class ChessBoard;

class King : public ChessPiece
{
private:
    Color _color;
public:
    King(Color c) : ChessPiece(c) { _piece = KING; _color = c; }
    King(int xInitial, int yInitial, Piece p, Color c) : ChessPiece(xInitial, yInitial, p, c) { _color = c; }
    bool checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf);
};

#endif /* Rook_h */
