#include "Queen.h"
#include "Board.h"
bool Queen::IsLegalMove(Position EP, int n)
{
	color Tq = C;
	if (IsVerticalMove(P, EP) == true)
	{
		if (IsVeriticalClear(P, EP, B) == true)
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
	if (IsDiagonalMove(P, EP) == true)
	{
		if (IsDiagonalClear(P, EP, B) == true)
		{
			return true;
		}
	}
	/*if (Rook::IsLegalMove(EP,n)==true || Bishop::IsLegalMove(EP,n)==true)
	{
		return true;
	}*/
	return false;
}
bool Queen::IsQueen()
{
	return true;
}
void Queen::Draw()
{
	
	if (C == white)
	{
		setcolor(WHITE);
		//int x = 3, y = 1,
			int rdim = 400 / 8, cdim = 400 / 8;
		int x1 = rdim * P.ci + 25;
		int y1 = cdim * P.ri + 15;
		//setlinestyle(style, userpat, 3);
		line(x1, y1, x1 + 15, y1 + 15);
		//setlinestyle(style, userpat, 3);
		line(x1, y1, x1 - 15, y1 + 15);
		//setlinestyle(style, userpat, 3);
		line(x1 - 15, y1 + 15, x1 + 15, y1 + 15);
		setfillstyle(SOLID_FILL, BLACK);
		circle(x1, y1 + 11, 9);
	}
	if (C == black)
	{
		setcolor(BLACK);
		int x = 3, y = 1, rdim = 400 / 8, cdim = 400 / 8;
		int x1 = rdim * P.ci + 25;
		int y1 = cdim * P.ri + 15;
		//setlinestyle(style, userpat, 3);
		line(x1, y1, x1 + 15, y1 + 15);
		//setlinestyle(style, userpat, 3);
		line(x1, y1, x1 - 15, y1 + 15);
		//setlinestyle(style, userpat, 3);
		line(x1 - 15, y1 + 15, x1 + 15, y1 + 15);
		setfillstyle(SOLID_FILL, BLACK);
		circle(x1, y1 + 11, 9);
	}
	if (C == white)
	{
		cout << "q";
	}
	if (C == black)
	{
		cout << "Q";
	}

}
void Queen::UnDraw()
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
