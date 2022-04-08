#include "Knight.h"
using namespace std;

bool Knight::checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf)
{
	int cont1 = 0;
	int x = 0;
	int y = 0;
	bool condition = false;

	cont1 = cb->checkColor(xi, yi, xf, yf);

	if ((xi == xf) && (yi == yf)) //if moving in straight line then false
	{
		condition = false;
		cout << "Invalid Knight move!" << endl;
		return false;
	}
	if (xi > xf) // to get x distance
	{
		x = xi - xf;
	}
	else if (xf > xi)
	{
		x = xf - xi;
	}
	if (yi > yf) //to get y distance
	{
		y = yi - yf;
	}
	else if (yf > yi)
	{
		y = yf - yi;
	}
	if (((x == 1) && (y == 2)) || ((x == 2) && (y == 1))) // to find condition true or false for the L movement
	{
		condition = true;
	}
	if (condition == true)
	{
		if (cont1 == 1)//if true, check space if there is the same color, if same color return false
		{
			cout << "Same color there" << endl;
			return false;
		}
		else // if different return true
		{
			return true;
		}
	}
	else // all other moves are invalid
	{
		cout << "Invalid Knight move!" << endl;
		return false;
	}
}
