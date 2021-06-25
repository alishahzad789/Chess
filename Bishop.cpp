#include "Bishop.h"
#include "Board.h"
bool Bishop::IsLegalMove(Position EP, int n)
{

	if (IsDiagonalMove(P, EP) == true)
	{
		if (IsDiagonalClear(P, EP, B) == true)
		{
			return true;
		}
	}
	
	return false;
}
void Bishop::Draw()
{
	char* lname[] = { "SOLID_LINE", "DOTTED_LINE", "CENTER_LINE", "DASHED_LINE", "USERBIT_LINE" };
	int style = SOLID_LINE, userpat = 1;

	int x = 0, y = 1, rdim = 400 / 8, cdim = 400 / 8;
	
	if (C == white)
	{
		setcolor(WHITE);
		int x1 = rdim * P.ci + 25;
		int y1 = cdim *P.ri + 15;
		setlinestyle(style, userpat, 3);
		line(x1, y1, x1 + 15, y1 + 15);
		setlinestyle(style, userpat, 3);
		line(x1, y1, x1 - 15, y1 + 15);
		setlinestyle(style, userpat, 3);
		line(x1 - 15, y1 + 15, x1 + 15, y1 + 15);
		setlinestyle(style, userpat, 3);
	}
	if (C == black)
	{
		setcolor(BLACK);
		int x1 = rdim * P.ci + 25;
		int y1 = cdim * P.ri + 15;
		//setlinestyle(style, userpat, 3);
		line(x1, y1, x1 + 15, y1 + 15);
		//setlinestyle(style, userpat, 3);
		line(x1, y1, x1 - 15, y1 + 15);
		//setlinestyle(style, userpat, 3);
		line(x1 - 15, y1 + 15, x1 + 15, y1 + 15);
		//setlinestyle(style, userpat, 3);
	}
	if (C == white)
	{
		cout << "b";
	}
	if (C == black)
	{
		cout << "B";
	}

}
void Bishop::UnDraw()
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
bool Bishop::IsBishop()
{
	return true;
}