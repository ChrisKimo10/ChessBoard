#include "Bishop.h"
using namespace std;

bool Bishop::checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf)
{
    int cont1;
    int cont2;
    int x = 0;
    int y = 0;
    int a = 0;
    int b = 0;

    cont1 = cb->checkColor(xi, yi, xf, yf);

    if ((xi != xf) && (yi != yf)) // to hold differences in xy 
    {
        if (xf > xi)
        {
            x = xf - xi;
        }
        else
        {
            x = xi - xf;
        }

        if (yf > yi) 
        {
            y = yf - yi;
        }
        else
        {
            y = yi - yf;
        }
    }

    if (cont1 == 1)// to see if there is a same color on the final position
    {
        cout << "Same color there" << endl;
        return false;
    }
    else
    {
        if (x == y)
        {
            if ((xf > xi) && (yf > yi))//moving diagonally right down
            {
                if (cont1 == 2) //if there is a diff color piece on final position then -1 to check the rest in between
                {
                    xf -= 1;
                    yf -= 1;
                }
                a = xf;
                b = yf;
                while ((a > xi) && (b > yi)) //to check the in betweens
                {
                    cont2 = cb->checkColor(xi, yi, a, b);
                    if (cont2 == 0)
                    {
                        a -= 1;
                        b -= 1;
                    }
                    else {
                        cout << "Something is blocking the way" << endl;
                        break;
                    }
                }
                if ((a == xi) && (b == yi))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if ((xf < xi) && (yf < yi))//move diagonally left up
            {
                if (cont1 == 2) {
                    xf += 1;
                    yf += 1;
                }
                a = xf;
                b = yf;
                while ((a < xi) && (b < yi)) 
                {
                    cont2 = cb->checkColor(xi, yi, a, b);
                    if (cont2 == 0)
                    {
                        a += 1;
                        b += 1;
                    }
                    else {
                        cout << "Something is blocking the way" << endl;
                        break;
                    }
                }
                if ((a == xi) && (b == yi))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if ((xf < xi) && (yf > yi)) //move diagonally left down
            {
                if (cont1 == 2)
                {
                    xf += 1;
                    yf -= 1;
                }
                a = xf;
                b = yf;
                while ((a < xi) && (b > yi)) 
                {
                    cont2 = cb->checkColor(xi, yi, a, b);
                    if (cont2 == 0)
                    {
                        a += 1;
                        b -= 1;
                    }
                    else {
                        cout << "Something is blocking the way" << endl;
                        break;
                    }
                }
                if ((a == xi) && (b == yi))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if ((xf > xi) && (yf < yi))//move diagonally right up
            {
                if (cont1 == 2) {
                    xf -= 1;
                    yf += 1;
                }
                a = xf;
                b = yf;
                while ((a > xi) && (b < yi)) {
                    cont2 = cb->checkColor(xi, yi, a, b);
                    if (cont2 == 0)
                    {
                        a -= 1;
                        b += 1;
                    }
                    else {
                        cout << "Something is blocking the way" << endl;
                        break;
                    }
                }
                if ((a == xi) && (b == yi))
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
                return false;
            }
        }
    }
}