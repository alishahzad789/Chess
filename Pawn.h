#include "Piece.h"
#pragma once
class Pawn : virtual public Piece
{
protected:
	//Board *PB;
	bool Fmove;

public:
	Pawn(Position p, color c, Board* b)
		:Piece(p,c,b)
	{
		Fmove = true;
	}
	///abstract function Islegal
	virtual bool IsLegalMove(Position EP, int n)override;//(sr,sc,er,ec)
	virtual void Draw()override;
	virtual void UnDraw()override;
	virtual void move(Position EP);
	~Pawn()
	{

	}
};

