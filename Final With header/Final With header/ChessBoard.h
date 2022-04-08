#ifndef ChessBoard_h
#define ChessBoard_h
#include "ChessPiece.h"
#include "Rook.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Knight.h"
#include "Queen.h"
#include "King.h"

class ChessBoard
{
protected:
    ChessPiece* board[8][8];
public:
    ChessBoard();
    void initialize();
    void printBoard();
    void movePiece(int xi, int yi, int xf, int yf);
    ChessPiece* checkChess(int xInitial, int yInitial);
    int checkColor(int xi, int yi, int xf, int yf);
};

#endif /* ChessBoard_h */
