#include <iostream>
#include <string>
#include "Position.h"
#include "ChessPiece.h"
#include "ChessBoard.h"

using namespace std;

int main()
{
    ChessBoard* board = new ChessBoard();
    ChessPiece* temp;

    board->initialize();
    board->printBoard();
        
    bool loopy = true;

    while (loopy == true)
    {
        string i;
        cout << "Initial Position: ";
        cin >> i;

        string f;
        cout << "Final Position: ";
        cin >> f;

        int xInitial, yInitial;
        int xFinal, yFinal;
        Position initial;
        Position fin;
        initial.setPosition(i);
        initial.setNum();
        fin.setPosition(f);
        fin.setNum();
        xInitial = initial.getXNum();
        yInitial = initial.getYNum();
        xFinal = fin.getXNum();
        yFinal = fin.getYNum();

        temp = board->checkChess(xInitial, yInitial);
       
        if (temp == NULL)
        {
            cout << "There is nothing there!" << endl << endl;
        }
        else
        {
            Piece p;
            p = temp->getPiece();
            bool movement = false;
            switch (p)  
            {
                case PAWN: {
                    Pawn* pawn = new Pawn(temp->getRow(), temp->getColumn(), temp->getPiece(), temp->getColor());
                    movement = pawn->checkPosition(pawn, board, xInitial, yInitial, xFinal, yFinal);
                    break;
                }
                case ROOK: {
                    Rook* rook = new Rook(temp->getRow(), temp->getColumn(), temp->getPiece(), temp->getColor());
                    movement = rook->checkPosition(board, xInitial, yInitial, xFinal, yFinal);
                    break;
                }
                case BISHOP: {
                    Bishop* bishop = new Bishop(temp->getRow(), temp->getColumn(), temp->getPiece(), temp->getColor());
                    movement = bishop->checkPosition(board, xInitial, yInitial, xFinal, yFinal);
                    break;
                }
                case KNIGHT: {
                    Knight* knight = new Knight(temp->getRow(), temp->getColumn(), temp->getPiece(), temp->getColor());
                    movement = knight->checkPosition(board, xInitial, yInitial, xFinal, yFinal);
                    break;
                }
                case QUEEN: {
                    Queen* queen = new Queen(temp->getRow(), temp->getColumn(), temp->getPiece(), temp->getColor());
                    movement = queen->checkPosition(board, xInitial, yInitial, xFinal, yFinal);
                    break;
                }
                case KING: {
                    King* king = new King(temp->getRow(), temp->getColumn(), temp->getPiece(), temp->getColor());
                    movement = king->checkPosition(board, xInitial, yInitial, xFinal, yFinal);
                    break;
                }
            }
            if (movement == true)
            {
                board->movePiece(xInitial, yInitial, xFinal, yFinal);
            }
        }
        board->printBoard();
        
    }
    return 0;
}
