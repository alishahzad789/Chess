#pragma once
#include"Position.h"
#include "Pawn.h"
#include "Rook.h"
#include "Bishop.h"
#include "Horse.h"
#include "Queen.h"
#include "King.h"
#include "graphics.h"

class Board
{
	private:
	Piece *B[8][8];
	Piece* Undo[8][8];
	Piece* Redo[8][8];
	char HL[8][8];
	Piece* DB[8][8];//Dummy board for CheckMate
	Position Ps[8][8];
	color Turn;
	Position S, E;
	char LB[8][8];//Load Board
	Board* Bi;
	friend class Piece;
	friend class Pawn;
	friend class Rook;
	friend class King;
	//Board* Bi;

	/*
	Player Ps[2];
	*/
public:
	Board();
	void Init();
	void FInit();
	void CInit();
	void move(Position S,Position E);
	void PrintBoard();
	void Play();
	void TurnChange();
	void SelectPiece();
	void SelectDestination();
	bool IsValidSelection();
	bool IsValidDestination();
	void DisplayMsg();
	void Hightlight();
	void UnHighlight();
	bool IsCHECK();
	void FindKing(color turn, int &kr, int &kc);
	//void Move(Position PS);
	void Hightlight2();
	bool SelfCheck();
	bool CheckMate();
	void Save();
	void Grid();
	void Load();
	void CopyBoardU();
	void CopyBoardR();
	bool IsCastling();
	~Board();


	

};

