#include "Rook.h"
using namespace std;

bool Rook::checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf)
{
    int cont1;
    int i = 0;
    int input;
    cont1 = cb->checkColor(xi, yi, xf, yf);

    if (cont1 == 1) //To check for same color on final space
    {
        cout << "Same color there" << endl;
        return false;
    }
    else
    {

        if (yi == yf) //for left-right movements
        {
            if (xf > xi)
            {
                if (cont1 == 2) //if final space has a different colored piece, if it does it changes final to minus 1 to check spaces in between initial and final
                {
                    xf -= 1;
                }
                i = xf;
                while (i > xi) //while loop to check the spaces between final and inital to find other pieces
                {
                    input = cb->checkColor(xi, yi, i, yf);
                    if (input == 0)
                    {
                        i -= 1;
                    }
                    else
                    {
                        cout << "Something is in between your moves." << endl;
                        break;
                    }

                }
                if (i == xi) //return true if all spaces are NULL
                {
                    return true;
                }
                else //return false if one or more spaces arent NULL
                {
                    return false;
                }
            }
            if (xi > xf) //if final space has a different colored piece, if it does it changes final to add 1 to check spaces in between initial and final
            {
                if (cont1 == 2)
                {
                    xf += 1;
                }
                i = xf;
                while (i < xi)
                {
                    input = cb->checkColor(xi, yi, i, yf);
                    if (input == 0)
                    {
                        i += 1;
                    }
                    else
                    {
                        cout << "Something is in between your moves." << endl;
                        break;
                    }

                }
                if (i == xi)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (yi != yf && xi != xf) //so rook does not move diagonally
        {
            cout << "Cannot move diagonally" << endl;
            return false;
        }

        if (xi == xf) //for up-down movement
        {
            if (yf > yi)
            {
               
                if (cont1 == 2) // to check if final space has a different colored piece, if it does it changes final to minus 1 to check spaces in between initial and final for capturing
                {
                    yf -= 1;
                }
                i = yf;
                while( i > yi ) // to check for pieces in between 
                {
                    input = cb->checkColor(xi, yi, xf, i);
                    if (input == 0)
                    {
                        i -= 1;
                    }
                    else 
                    {
                        cout << "Something is in between your moves." << endl;
                        break;
                    }
                    
                }
                if (i == yi)
                {
                    return true;
                }
                else 
                {
                    return false;
                }

            }
            else if (yi > yf)
            {
               
                if (cont1 == 2) // if final space has a different colored piece, if it does it changes final to add 1 to check spaces in between initial and final
                {
                    yf += 1;
                }
                i = yf;
                while (i < yi) // to check for pieces in between
                {
                    input = cb->checkColor(xi, yi, xf, i);
                    if (input == 0)
                    {
                        i += 1;
                    }
                    else
                    {
                        cout << "Something is in between your moves." << endl;
                        break;
                    }

                }

                if (i == yi)
                {
                    return true;
                }
                else
                {
                    return false;
                }

            }
            

        }
        else if (yi != yf && xi != xf) //so rook does not move diagonally
        {
            cout << "Cannot move diagonally" << endl;
            return false;
        }
    }
    return false;
}

