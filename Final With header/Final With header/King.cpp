#include "King.h"
using namespace std;

bool King::checkPosition(ChessBoard* cb, int xi, int yi, int xf, int yf)
{
	int cont1 = 0;
	int x = 0;
	int y = 0;
	cont1 = cb->checkColor(xi, yi, xf, yf);

	if (cont1 == 1)
	{
		cout << "Same color there!" << endl;
		return false;
	}

	if (xi > xf)
	{
		x = xi - xf;
	}
	else if (xf > xi)
	{
		x = xf - xi;
	}
	
	if (yi > yf)
	{
		y = yi - yf;
	}
	else if (yf > yi)
	{
		y = yf - yi;
	}

	if ((x <= 1) && (y <= 1))
	{
		return true;
	}
	else
	{
		return false;
	}
}