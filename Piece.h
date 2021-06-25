#include "Position.h"
#pragma once
#include<iostream>
using namespace std;
enum color{black=-1,white=1};


/* NEVER ADD HEADER file of dependent classes
- Instead use forward declaration
*/
class Board;// forward declaration

class Piece
{
protected:
	 color C;
	Position P;
	Board* B;
protected:
	static bool IsVeriticalClear(Position P, Position EP, Board* b);
	static bool IsHorizontalClear(Position P, Position EP, Board* b);
	static bool IsVerticalMove(Position P, Position EP);
	static bool IsHorizontalMove(Position P, Position EP);
	static bool IsDiagonalMove(Position P, Position EP);
	static bool IsDiagonalClear(Position P, Position EP, Board* b);
public:
	Piece()
	{

	}
	Piece(Position p, color c, Board* b)
		:P(p),C(c),B(b)
	{
		
	}
 
	virtual bool IsLegalMove(Position EP,int n) = 0;
	virtual void move(Position EP);
	virtual void Draw() = 0;
	virtual void UnDraw() = 0;
	//static bool IsHorizontalcalClear(Position P, Position EP, ChessBoard* b);
	virtual bool IsKing();
	virtual bool IsRook();
	virtual bool IsBishop();
	virtual bool IsQueen();
	void SetPosition(int r,int c)
	{
		P.ri = r;
		P.ci = c;
	}
	color getColor()
	{
		return C;
	}
	~Piece();

};

