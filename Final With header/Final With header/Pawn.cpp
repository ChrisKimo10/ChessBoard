#include "Pawn.h"
using namespace std;

bool Pawn::checkPosition(Pawn* p, ChessBoard* cb, int xi, int yi, int xf, int yf)
{
    int cont;
    cont = cb->checkColor(xi, yi, xf, yf);
    if (cont == 1)
    {
        cout << "Same color there" << endl;
        return false;
    }
    else
    {
        switch (_color)
        {
            case WHITE:
            {
                if (xf == xi) // vertical movement
                {
                    if (yi == 1) // white initial position
                    {
                        if (yf <= (yi + 2))
                        {
                            if (cont == 0)
                            {
                                return true;
                            }
                            else
                            {
                                cout << "There is a piece there!" << endl;
                                return false;
                            }
                        }
                        else
                        {
                            cout << "Invalid move, white pawn can only move one or two from initial position" << endl;
                            return false;
                        }
                    }
                    else if (yi != 1) // if not initial position
                    {
                        if (yf == (yi + 1))
                        {
                            if (cont == 0)
                            {
                                return true;
                            }
                            else
                            {
                                cout << "There is a piece there!" << endl;
                                return false;
                            }
                        }
                        else
                        {
                            cout << "Invalid move, white pawn can only move one space." << endl;
                            return false;
                        }
                    }
                    else if (yf < yi)
                    {
                        cout << "White Pawn cannot move backwards" << endl;
                        return false;
                    }
                }
                else if ((yf == (yi + 1)) && ((xf + 1) == xi)) //to capture right
                {
                    if (cont == 2)
                    {
                        return true;
                    }
                    else
                    {
                        cout << "Invalid Move" << endl;
                        return false;
                    }
                }
                else if ((yf == yi + 1) && ((xf - 1) == xi)) //to capture left
                {
                    if (cont == 2)
                    {
                        return true;
                    }
                    else
                    {
                        cout << "Invalid Move" << endl;
                        return false;
                    }
                }
                else
                {
                    cout << "cannot move sideways" << endl;
                    return false;
                }
                break;
            }
            case BLACK:
            {
                if (xf == xi)
                {
                    if (yi == 6)
                    {
                        if (yf >= (yi - 2))
                        {
                            if (cont == 0)
                            {
                                return true;
                            }
                            else
                            {
                                cout << "There is a piece there!" << endl;
                                return false;
                            }
                        }
                        else
                        {
                            cout << "Invalid move, black pawn can only move one or two from initial position" << endl;
                            return false;
                        }
                    }
                    if (yi != 6)
                    {
                        if (yf == (yi - 1))
                        {
                            if (cont == 0)
                            {
                                return true;
                            }
                            else
                            {
                                cout << "There is a piece there!" << endl;
                                return false;
                            }
                        }
                        else
                        {
                            cout << "Invalid move, black pawn can only move one space." << endl;
                            return false;
                        }
                    }
                    
                    else if (yf > yi)
                    {
                        cout << "Black Pawn cannot move backwards" << endl;
                        return false;
                    }
                }
                else if ((yi == (yf + 1)) && ((xf + 1) == xi))
                {
                    if (cont == 2)
                    {
                        return true;
                    }
                    else
                    {
                        cout << "Invalid Move" << endl;
                        return false;
                    }
                }
                else if ((yi == yf + 1) && ((xf - 1) == xi))
                {
                    if (cont == 2)
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    cout << "cannot move sideways" << endl;
                    return false;
                }
                break;
            }
        }
    }
    
   
}
