#include "Queen.h"
#include "Rook.h"
#include "Bishop.h"
using namespace std;

bool Queen::checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf)
{
	int x = 0;
	int y = 0;
	int cont1 = 0;
	int condition = 0;
    bool cont2 = false;
    cont1 = cb->checkColor(xi, yi, xf, yf); 
    if (cont1 == 1)
    {
        cout << "Same color there!" << endl;
    }

	/*
	* condition = 0 (fail or invalid move)
	* condition = 1 (rook movement)
	* condition = 2 (bishop movement)
	*/

    if ((xi == xf) && (yi != yf)) // to check if rook type movement
    {
        condition = 1;
    }
    else if ((xi != xf) && (yi == yf)) // to check if rook type movement
    {
        condition = 1;
    }

    else if ((xi != xf) && (yi != yf)) // to check if bishop type movement
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
        if (x == y)
        {
            condition = 2;
        }
        
    }
    if (condition == 1) //if rook type move it takes the rook.cpp and uses its rules
    {
        Rook* r = new Rook(WHITE);
        cont2 = r->checkPosition(cb, xi, yi, xf, yf);
        return cont2;
    }
    else if (condition == 2) //if bishop type move it takes bishop.cpp and uses its rules
    {
        Bishop* b = new Bishop(WHITE);
        cont2 = b->checkPosition(cb, xi, yi, xf, yf);
        return cont2;
    }
    else //if any other type of moves it is invalid
    {
        cout << "Invalid Move" << endl;
        return false;
    }

}