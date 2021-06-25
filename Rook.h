#pragma once
#include "Piece.h"
class Rook:virtual public Piece
{
protected:

public:
	Rook()
	{

	}
	Rook(Position p, color c, Board* b)
		:Piece(p, c, b)
	{
	}
	virtual bool IsLegalMove(Position EP, int n)override;//(sr,sc,er,ec)
	virtual void Draw()override;
	virtual void UnDraw()override;
	bool IsRook()override;
	~Rook()
	{
	}

};

