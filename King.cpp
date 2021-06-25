#include "King.h"
#include "Board.h"
bool King::IsLegalMove(Position Ep, int n)
{
	if (n==2)
	{
		if (C == white)
		{
			if (B->B[Ep.ri][Ep.ci]==nullptr&& B->B[Ep.ri][5] == nullptr && Ep.ci > P.ci && Ep.ci==6)
			{
				 
				for (int ki = 1; ki <= 2; ki++)
				{
					Position e(0, 4 + ki);
					for (int r = 0; r < 8; r++)
					{
						for (int c = 0; c < 8; c++)
						{
							if (B->B[r][c] != nullptr && B->B[r][c]->getColor() == black && B->B[r][c]->IsLegalMove(e, 0))
							{
								return false;
							}
						}
					}
				}
			}
			//////////////////////////////////////////////////////////////////////////////////////
			if (B->B[Ep.ri][3] == nullptr && B->B[Ep.ri][2] == nullptr && B->B[Ep.ri][1] == nullptr)
			{
				if (B->B[Ep.ri][Ep.ci] == nullptr && Ep.ci > P.ci && Ep.ci == 6)
				{

					for (int ki = 1; ki <= 2; ki++)
					{
						Position e(0, 4 - ki);
						for (int r = 0; r < 8; r++)
						{
							for (int c = 0; c < 8; c++)
							{
								if (B->B[r][c] != nullptr && B->B[r][c]->getColor() == black && B->B[r][c]->IsLegalMove(e, 0))
								{
									return false;
								}
							}
						}
					}

				}
			}
		}
		if (C == black)
		{
			if (B->B[Ep.ri][Ep.ci] == nullptr && B->B[Ep.ri][5] == nullptr && Ep.ci > P.ci && Ep.ci == 6)
			{

				for (int ki = 1; ki <= 2; ki++)
				{
					Position e(7, 4 + ki);
					for (int r = 0; r < 8; r++)
					{
						for (int c = 0; c < 8; c++)
						{
							if (B->B[r][c] != nullptr && B->B[r][c]->getColor() == white && B->B[r][c]->IsLegalMove(e, 0))
							{
								return false;
							}
						}
					}
				}
			}
			if (B->B[Ep.ri][3] == nullptr && B->B[Ep.ri][2] == nullptr && B->B[Ep.ri][1] == nullptr)
			{
				if (B->B[Ep.ri][Ep.ci] == nullptr && Ep.ci > P.ci && Ep.ci == 6)
				{

					for (int ki = 1; ki <= 2; ki++)
					{
						Position e(7, 4 - ki);
						for (int r = 0; r < 8; r++)
						{
							for (int c = 0; c < 8; c++)
							{
								if (B->B[r][c] != nullptr && B->B[r][c]->getColor() == black && B->B[r][c]->IsLegalMove(e, 0))
								{
									return false;
								}
							}
						}
					}

				}
			}
		}
		return true;
	}
	/*Rook* r = dynamic_cast<Rook*>(B->B[0][7]);
	if (C==white  && Fm == true)
	{
		if (Ep.ci > P.ci && Ep.ri==0 && P.ri==0 && r != nullptr && B->B[0][6] == nullptr && B->B[0][5] == nullptr)
		{
			if (r != nullptr && (P.ri == 0 && P.ci == 4) && (Ep.ri == P.ri))
			{
				for (int ki = 0; ki <= 2; ki++)
				{
					Position e(0, 4 + ki);
					for (int r = 0; r < 8; r++)
					{
						for (int c = 0; c < 8; c++)
						{
							if (B->B[r][c]!=nullptr && B->B[r][c]->getColor() == black && B->B[r][c]->IsLegalMove(e, 0))
							{
								return false;
							}
						}
					}
				}
			}
			//return true;
			Fm = false;

		}
		if (Ep.ci < P.ci)
		{
			if (r != nullptr && C == white && (P.ri == 0 && P.ci == 4) && (Ep.ri == P.ri))
			{
				for (int ki = 0; ki <= 3; ki++)
				{
					Position e(0, 4 - ki);
					for (int r = 0; r < 8; r++)
					{
						for (int c = 0; c < 8; c++)
						{
							if (B->B[r][c] != nullptr && B->B[r][c]->getColor() == black && B->B[r][c]->IsLegalMove(e, 0))
							{
								return false;
							}
						}
					}
				}
			////	return true;
			}
		}
		return true;
	}
	   */
	if (IsVerticalMove(P, Ep) == true)
	{
		if (IsVeriticalClear(P, Ep, B) == true)
		{
			if (abs(Ep.ri - P.ri) == 1 || abs(Ep.ci - P.ci) == 1)
			{
				return true;
			}
		}
	}
	if (IsHorizontalMove(P, Ep) == true)
	{
		if (IsHorizontalClear(P, Ep, B) == true)
		{
			if (abs(Ep.ri - P.ri) == 1 || abs(Ep.ci - P.ci) == 1)
			{
				return true;
			}
		}
	}
	if (IsDiagonalMove(P, Ep) == true)
	{
		if (IsDiagonalClear(P, Ep, B) == true)
		{
			if (abs(Ep.ri - P.ri) == 1 || abs(Ep.ci - P.ci) == 1)
			{
				return true;
			}
		}
	}
	
	return false;
}
void King::UnDraw()
{
	cout << " ";

}
bool King::IsKing()
{
	return true;

}
void King::Draw()
{

	if (C == white)
	{
		int rdim = 400 / 8, cdim = 400 / 8;
		int x1 = rdim * P.ci + 10;
		int y1 = cdim * P.ri + 15;
		setfillstyle(SOLID_FILL, WHITE);
		////bar(x1,y1,x2,y2)
		bar(x1, y1, x1 + 30, y1 + 20);
		bar(x1 + 5, y1 - 10, x1 + 25, y1 + 30);
	}
	if (C == black)
	{
		int rdim = 400 / 8, cdim = 400 / 8;
		int x1 = rdim * P.ci + 10;
		int y1 = cdim * P.ri + 15;
		setfillstyle(SOLID_FILL, BLACK);
		////bar(x1,y1,x2,y2)
		bar(x1, y1, x1 + 30, y1 + 20);
		bar(x1 + 5, y1 - 10, x1 + 25, y1 + 30);
	}
	if (C == white)
	{
		cout << "k";
	}
	if (C == black)
	{
		cout << "K";
	}
}