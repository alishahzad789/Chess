#pragma once
#include "Piece.h"
#include"Rook.h"
#include"Bishop.h"
class Queen :public Piece
{
protected:
public:
	Queen(Position p, color c, Board* b)
		:Piece(p, c, b)
	{
	}
	virtual bool IsLegalMove(Position EP, int n)override;//(sr,sc,er,ec)
	virtual void Draw()override;
	virtual void UnDraw()override;
	bool IsQueen()override;

    ~Queen()
	{

	}
};

