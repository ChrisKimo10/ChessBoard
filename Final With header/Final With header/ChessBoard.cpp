#include "ChessBoard.h"
using namespace std;

class Pawn;


ChessBoard :: ChessBoard() //initialize whole board as NULL
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j] = NULL;
        }
    }
}

void ChessBoard :: initialize() //intialize the board
{
    board[0][0] = new Rook(WHITE);
    board[0][1] = new Knight(WHITE);
    board[0][2] = new Bishop(WHITE);
    board[0][3] = new Queen(WHITE);
    board[0][4] = new King(WHITE);
    board[0][5] = new Bishop(WHITE);
    board[0][6] = new Knight(WHITE);
    board[0][7] = new Rook(WHITE);

    board[7][0] = new Rook(BLACK);
    board[7][1] = new Knight(BLACK);
    board[7][2] = new Bishop(BLACK);
    board[7][3] = new Queen(BLACK);
    board[7][4] = new King(BLACK);
    board[7][5] = new Bishop(BLACK);
    board[7][6] = new Knight(BLACK);
    board[7][7] = new Rook(BLACK);

    
    for (int x = 0; x < 8; x++)
    {
        board[1][x] = new Pawn(WHITE);
    }
    for (int x = 0; x < 8; x++)
    {
        board[6][x] = new Pawn(BLACK);
    }
    

}

void ChessBoard::printBoard() 
{
    cout << "      a   b   c   d   e   f   g   h " << endl << "  " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << " " << i + 1 << "   ";
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == NULL)
            {
                cout << " " << "\21 " << " ";
            }
            else
            {
                Piece p = board[i][j]->getPiece();
                Color c = board[i][j]->getColor();

                switch (p)
                {
                case KING: 
                    if (c == WHITE)
                    {
                        cout << " WK ";
                    }
                    else
                    {
                        cout << " BK ";
                    }
                    break;
                case QUEEN: 
                    if (c == WHITE)
                    {
                        cout << " WQ ";
                    }
                    else
                    {
                        cout << " BQ ";
                    }
                    break;
                case BISHOP:
                    if (c == WHITE)
                    {
                        cout << " WB ";
                    }
                    else
                    {
                        cout << " BB ";
                    }
                    break;
                case KNIGHT:
                    if (c == WHITE)
                    {
                        cout << " WN ";
                    }
                    else
                    {
                        cout << " BN ";
                    }
                    break;
                case ROOK: 
                    if (c == WHITE)
                    {
                        cout << " WR ";
                    }
                    else
                    {
                        cout << " BR ";
                    }
                    break;
                case PAWN: 
                    if (c == WHITE)
                    {
                        cout << " WP ";
                    }
                    else
                    {
                        cout << " BP ";
                    }
                    break;
                default: cout << "XXX";
                    break;
                }
            }

        }
        cout << endl;
    }

}

void ChessBoard::movePiece(int xi, int yi, int xf, int yf) //Function that moves a piece from initial position to final position while making initial NULL
{
    ChessPiece* temp = board[yi][xi];
    board[yi][xi] = NULL;
    // TODO Use class logic to do correct move.
    board[yf][xf] = temp;
}

ChessPiece* ChessBoard::checkChess(int xInitial, int yInitial) //To check what piece is on the space
{
    ChessPiece* cp;
    cp = board[yInitial][xInitial];
    return cp;
}

int ChessBoard::checkColor(int xi, int yi, int xf, int yf) //To check if the color is the same, different, or the space is NULL
{
    if (board[yf][xf] == NULL)
    {
        return 0;
    }
    if (board[yf][xf]->getColor() == board[yi][xi]->getColor())
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
