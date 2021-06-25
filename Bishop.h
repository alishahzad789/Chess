#pragma once
#include "Piece.h"
class Bishop :
	virtual public Piece
{
public:
	Bishop()
	{

	}
	Bishop(Position p, color c, Board* b)
		:Piece(p, c, b)
	{
	}
	virtual bool IsLegalMove(Position EP, int n)override;//(sr,sc,er,ec)
	virtual void Draw()override;
	virtual void UnDraw()override;
	bool IsBishop()override;
	~Bishop()
	{

	}


};

