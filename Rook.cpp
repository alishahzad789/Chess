#include "Rook.h"
#include "Board.h"
bool Rook::IsLegalMove(Position EP, int n)
{
	
	if (IsVerticalMove(P,EP)==true)
	{
		if (IsVeriticalClear(P,EP,B) == true)
		{
			return true;
		}
	}
	if (IsHorizontalMove(P, EP) == true)
	{
		if (IsHorizontalClear(P, EP, B) == true)
		{
			return true;
		}
	}
	return false;

}
bool Rook:: IsRook()
{
	return true;
}
void Rook::Draw()
{
	
	if (C == black)
	{
		setfillstyle(SOLID_FILL, BLACK);
		int rdim = 400 / 8, cdim = 400 / 8;// x1 = 7, y1 = 5, x2 = 20, y2 = 20;
		setfillstyle(SOLID_FILL, BLACK);
		//bar(x1,y1,x2,y2)
		bar(rdim * P.ci + 10, cdim * P.ri + 15, rdim * P.ci + 40, cdim * P.ri + 40);
	}
	if (C == white)
	{
		setfillstyle(SOLID_FILL, WHITE);
		int rdim = 400 / 8, cdim = 400 / 8;// x1 = 7, y1 = 5, x2 = 20, y2 = 20;
		setfillstyle(SOLID_FILL,WHITE);
		//bar(x1,y1,x2,y2)
		bar(rdim * P.ci + 10, cdim * P.ri + 15, rdim * P.ci + 40, cdim * P.ri + 40);
		setfillstyle(SOLID_FILL, WHITE);

	}
	if (C == white)
	{
		cout << "r";

	}
	if (C == black)
	{
		
		cout << "R";
	}
}
void Rook::UnDraw()
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