#ifndef ChessPiece_h
#define ChessPiece_h

enum Color { WHITE, BLACK, NONE };
enum Piece { KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN, NOTYPE }; //Decided that since colors can use enum why cant pieces too


class ChessPiece
{
protected:
    Color _color;
    Piece _piece;
    int _row;
    int _column;
public:
    ChessPiece();
    ChessPiece(Color c);
    ChessPiece(int row, int column, Color c);
    ChessPiece(int row, int column, Piece p, Color c);
    int getRow();
    int getColumn();
    Color getColor();
    Piece getPiece();
};
#endif /* ChessPiece_h */
#pragma once
