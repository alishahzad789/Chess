#pragma once
#include "Piece.h"
#include "Queen.h"
#include "graphics.h"
class King :public Piece
{
protected:
public:
	 bool  Fm = true;

	King(Position p, color c, Board* b)
		:Piece(p, c, b)
	{

	}
	/*int Max(int a, int b)
	{
		return (a > b) ? a : b;
	}
	int MaxAbsDiff(Position Ep)
	{
		return Max(abs(P.ri - Ep.ri), (P.ci - Ep.ci));
	}*/
	virtual bool IsLegalMove(Position Ep, int n)override;
	bool getfm()
	{

	}
	virtual void Draw()override;
	virtual void UnDraw()override;
	virtual bool IsKing()override;
		/*
	class King: virtual public Queen
{
public:
	King(Position p, Color c, Board* b) :Queen(p, c, b), Bishop(p, c, b), Rook(p, c, b),piece(p, c, b)
	{

	}
	int max(int a,int b)
	{
		return (a > b)?a:b;
	}
	int MaxAbsDiff(Position Ep)
	{
		return max(abs(P.ri - Ep.ri), (P.ci - Ep.ci));
	}
	virtual bool IsLegal(Position Ep)
	{
		if (Queen::IsLegalMove(Ep) && MaxAbsDiff(Ep) <= 1)
        {
			return true;
		}
		return false;
	}

	virtual void Draw()
	{
		if (C == White)
		{
			cout << 'k';
		}
		else
			cout << 'K';

	}
	virtual void UnDraw()
	{
		cout << " ";
	}
};*/
};

