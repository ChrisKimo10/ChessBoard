#ifndef Queen_h
#define Queen_h
#include <iostream>
#include "ChessPiece.h"
#include "ChessBoard.h"
using namespace std;

class ChessBoard;

class Queen : public ChessPiece
{
private:
    Color _color;
public:
    Queen(Color c) : ChessPiece(c) { _piece = QUEEN; _color = c; }
    Queen(int xInitial, int yInitial, Piece p, Color c) : ChessPiece(xInitial, yInitial, p, c) { _color = c; }
    bool checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf);
};

#endif /* Rook_h */
