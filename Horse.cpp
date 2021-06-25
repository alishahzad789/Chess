#include "Horse.h"
#include "Board.h"
bool Horse::IsLegalMove(Position EP,int n)
{


	int DR = EP.ri - P.ri;
	int DC = EP.ci - P.ci;
	if ((abs(DR)==2 && abs(DC)==1) || (abs(DC) == 2 && abs(DR) == 1))
	{
		return true;
	}

	return false;
}
void Horse::Draw()
{
	if (C == white)
	{
		int rdim = 400 / 8, cdim = 400 / 8;// x1 = 7, y1 = 5, x2 = 20, y2 = 20;
		//sector(int x, int y, int stangle, int endangle, int xradius, int yradius);
		setfillstyle(SOLID_FILL, WHITE);
		//sector(rdim * P.ci + 20, rdim * (P.ri+1) - 10, 0, 90, 20, 20);//add 1 in y evertime
		pieslice(rdim * P.ci + 20, rdim * (P.ri + 1) - 10, 0, 90, 20);

	}
	if (C == black)
	{
		//setfillstyle(SOLID_FILL, BLACK);
		int rdim = 400 / 8, cdim = 400 / 8;// x1 = 7, y1 = 5, x2 = 20, y2 = 20;
		//sector(int x, int y, int stangle, int endangle, int xradius, int yradius);
		setfillstyle(SOLID_FILL, BLACK);
		//sector(rdim * P.ci + 20, rdim * (P.ri + 1) - 10, 0, 90, 20, 20);//add 1 in y evertime
		pieslice(rdim * P.ci + 20, rdim * (P.ri + 1) - 10, 0, 90, 20);
		//setfillstyle(SOLID_FILL, BLACK);

	}

	
	if (C == white)
	{
		cout << "h";
	}
	if (C == black)
	{
		cout << "H";
	}

}
void Horse::UnDraw()
{
	if (C == white)
	{
		cout << " ";
	}
	if (C == black)
	{
		cout << " ";
	}

}