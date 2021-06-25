#pragma once
#include "Piece.h"
#include "Board.h"
bool Piece::IsKing()
{
	return false;
}
bool Piece::IsRook()
{
	return false;
}
bool Piece::IsBishop()
{
	return false;
}
bool Piece::IsQueen()
{
	return false;
}
bool Piece::IsLegalMove(Position EP, int n)
{
	//return true;
	return IsLegalMove(EP,n);
}
void Piece::move(Position EP)
{
	Position T = P;
	P = EP;
	B->move(T,EP);
	
}
bool Piece::IsVerticalMove(Position P, Position EP)
{
	if (P.ci == EP.ci)
	{
		return true;
	}
	return false;
}
bool Piece::IsVeriticalClear(Position P, Position EP, Board* b)
{
	if (EP.ri == P.ri + 1)
	{
		return true;
	}
	if (EP.ri == P.ri - 1)
	{
		return true;
	}
	if (EP.ri < P.ri)//down to up
	{
		for (int r = P.ri - 1; r > EP.ri; r--)
		{
			if (b->B[r][P.ci]!=nullptr)
			{
				return false;
			}
		}
	}
	if (EP.ri > P.ri)//up to down
	{
		for (int r = P.ri+1; r < EP.ri; r++)
		{
			if (b->B[r][P.ci] != nullptr)
			{
				return false;
			}
		}
	}
	return true;
}
 bool Piece::IsHorizontalMove(Position P, Position EP)
{
	if (P.ri == EP.ri)
	{
		return true;
	}
	return false;
}
bool Piece::IsHorizontalClear(Position P, Position EP, Board* b)
{
	if (EP.ci == P.ci + 1)
	{
		return true;
	}
	if (EP.ci == P.ci - 1)
	{
		return true;
	}
	if (EP.ci < P.ci)
	{
		for (int c = P.ci - 1; c > EP.ci; c--)
		{
			if (b->B[P.ri][c] != nullptr)//right to left
			{
				return false;
			}
		}
	}
	if (EP.ci > P.ci)
	{
		for (int c = P.ci + 1; c < EP.ci; c++)
		{
			if (b->B[P.ri][c] != nullptr)//left to right
			{
				return false;
			}
		}
	}
	return true;
}
bool Piece::IsDiagonalClear(Position P, Position EP,Board *b)
{

	if (abs(EP.ri-P.ri)==1 || abs(P.ri-EP.ri) ==1)
	{
		return true;
	}
	if (EP.ri< P.ri)//down to up
	{
		int count = EP.ri - P.ri;
		if (count < 0)
		{
			count *= -1;
		}
		if (P.ci < EP.ci)//left to right
		{
			for (int i = 1; i <EP.ci-P.ci ; i++)//<=EP.ci-P.ci
			{
				if (b->B[P.ri - i][P.ci + i]!=nullptr)
				{
					return false;
				}
			}
		}
		if (EP.ci < P.ci)//right to left
		{
			for (int i = 1; i < P.ci - EP.ci; i++)
			{
				if (b->B[P.ri - i][P.ci - i] != nullptr )
				{
					return false;
				}
			}
		}
	}
	if (EP.ri > P.ri)//up to down
	{
		/*int count = EP.ri - P.ri;
		if (count < 0)
		{
			count *= -1;
		}*/
		if (EP.ci < P.ci)//right to left
		{
			for (int i = 1; i < EP.ri - P.ri; i++)
			{
				if (b->B[P.ri + i][P.ci - i] != nullptr)
				{
					return false;
				}
			}
		}
		if (EP.ci > P.ci)//left to right
		{
			for (int i = 1; i < EP.ri - P.ri; i++)
			{
				if (b->B[P.ri+i][P.ci+i] != nullptr)
				{
					return false;
				}
			}
		}
	}
	return true;
}
bool Piece::IsDiagonalMove(Position P, Position EP)
{
	int DiagR = EP.ri - P.ri;//CHECKs IF THE ROWS and COLS DIFFERNCE IS dIAGONAL PATTERN OR NOT?
	int DiagC = EP.ci - P.ci;
	if (DiagR == DiagC || DiagR == -1 * DiagC)
	{
		return true;
	}
	else return false;
}
void Piece::Draw()
{

}
void Piece::UnDraw()
{

}
Piece::~Piece()
{

}