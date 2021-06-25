#include "Pawn.h"
#include "Board.h"

void Pawn::move(Position EP)
{
	Fmove = false;
	Piece::move(EP);
}
bool Pawn:: IsLegalMove(Position EP, int n)//(sr,sc,er,ec)
{

	if (IsDiagonalMove(P, EP) == true)
	{
		int a = EP.ri - P.ri;
		if (abs(a) != 1)
		{
			return false;//only one jump check
		}

		if (C == black)
		{
			if (EP.ri < P.ri)
			{
				if (B->B[EP.ri][EP.ci] != nullptr)
				{
					return true;
				}

			}
		}

		if (C == white)
		{
			if (EP.ri > P.ri)
			{
				if (B->B[EP.ri][EP.ci] != nullptr)
				{
					return true;
				}
			
			}
		}
	}
	if (IsVerticalMove(P, EP) == true && IsVeriticalClear(P, EP, B)==true)
	{
		if (C == black && B->B[P.ri - 1][P.ci] == nullptr)
		{
			/////////////////////BLACK PIECE MOVE////////////////////////////////////
			if (Fmove == true)
			{
				if (P.ri==6 && EP.ri==4)
				{
					if (B->B[P.ri - 2][P.ci] == nullptr && B->B[P.ri - 1][P.ci] == nullptr)
					{
						return true;
					}
				}
				if (P.ri == 6 && EP.ri == 5)
				{
					if (B->B[P.ri - 1][P.ci] ==nullptr)
					{
						return true;
					}
				}
			  //  if (EP.ri == P.ri - 1)
					//{
					//	

					//	//Fmove = false;
					//	return true;
			  //  }
			}
			if (Fmove == false)
			{
				if (P.ri < 6)
				{
					if (EP.ri == P.ri - 1)
					{
						
						//Fmove = false;
						return true;
					}
				}
			}
		}
		/////////////////////WHITE PIECE MOVE////////////////////////////////////
		if (C == white &&  B->B[P.ri + 1][P.ci] == nullptr)
		{
			if (EP.ci == P.ci && Fmove == true)
			{
				if (P.ri == 1 || EP.ri==3)
				{
					if (P.ri == 1 && EP.ri == 3)
					{
						if (B->B[P.ri + 2][P.ci] == nullptr && B->B[P.ri + 1][P.ci] == nullptr)
						{
							return true;
						}
					}

					if (P.ri == 1 && EP.ri == 2)
					{
						if (B->B[P.ri + 1][P.ci] == nullptr)
						{
							return true;
						}
					}
					//if (EP.ri == P.ri + 1)
					//{
					//	
					////	Fmove = false;
					//	return true;
					//}
				}
			}

			if (EP.ci == P.ci && Fmove == false)
			{
				if (P.ri > 1)
				{
					if (EP.ri == P.ri + 1)
					{
						
						//Fmove = false;
						return true;
					}
				}
			}
		}
	}
	return false;

}
void Pawn::Draw()
{
	

	if (C == white)
	{
		int rdim = 400 / 8, cdim = 400 / 8;
		int x1 = rdim * P.ci + 25;
		int y1 = cdim * P.ri + 25;
		//EMPTY_FILL
		//SOLID_FILL
		setfillstyle(SOLID_FILL, WHITE);
		setcolor(WHITE);
		fillellipse(x1, y1, 12, 12);
	}
	else
	{
		int rdim = 400 / 8, cdim = 400 / 8;
		int x1 = rdim * P.ci + 25;//EMPTY_FILL
		//SOLID_FILL
		int y1 = cdim * P.ri + 25;
		setfillstyle(SOLID_FILL, BLACK);
		setcolor(BLACK);
		fillellipse(x1, y1, 12, 12);
	}

	 if (C == white)
	 {
		 cout << "p";
	 }
	 else
	 {
		 cout << "P";
	 }
 }
 void Pawn::UnDraw()
 { 
	 cout << " ";
 }