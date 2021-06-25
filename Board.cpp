#include "Board.h"
#include <fstream>

Board::Board()
{
	
}
void Board::TurnChange()
{
	if (Turn == white)
	{
		Turn = black;
	}
	else
	{
		Turn = white;
	}
}
void Board::Init()
{
	
	for (int ri = 0; ri < 8 ; ri++)
	{
		for (int ci = 0; ci < 8; ci++)
		{
			if (ri == 1)
			{//white pawn
				//B[ri][ci] = nullptr;
				B[ri][ci] = new Pawn(Position(ri, ci), white, this);
			}
			else if (ri == 6)
			{//black pawn
				//B[ri][ci] = nullptr;
				B[ri][ci] = new Pawn(Position(ri, ci), black, this);
			}
			else if ((ri == 0 && ci == 0) || (ri == 0 && ci == 7))
			{//white rook
				B[ri][ci] = new Rook(Position(ri, ci), white, this);

			}
			else if ((ri == 7 && ci == 0) || (ri == 7 && ci == 7))
			{//black rook
				B[ri][ci] = new Rook(Position(ri, ci), black, this);

			}
			else if ((ri == 0 && ci == 2) || (ri == 0 && ci == 5))
			{//white bishop
				B[ri][ci] = new Bishop(Position(ri, ci), white, this);

			}
			else if ((ri == 7 && ci == 2) || (ri == 7 && ci == 5))
			{//black bishop
				B[ri][ci] = new Bishop(Position(ri, ci), black, this);

			}
			else if ((ri == 0 && ci == 1) || (ri == 0 && ci == 6))
			{//white Horse
				B[ri][ci] = new Horse(Position(ri, ci), white, this);

			}
			else if ((ri == 7 && ci == 1) || (ri == 7 && ci == 6))
			{//black Horse
				B[ri][ci] = new Horse(Position(ri, ci), black, this);
			}
			else if (ri == 0 && ci == 3)
			{//white Queen
				B[ri][ci] = new Queen(Position(ri, ci), white, this);

			}
			else if (ri == 7 && ci == 3) 
			{//black Qeen
				B[ri][ci] = new Queen(Position(ri, ci), black, this);
			}
			else if (ri == 0 && ci == 4)
			{//white Queen
				B[ri][ci] = new King(Position(ri, ci), white, this);

			}
			else if (ri == 7 && ci == 4)
			{//black Qeen
				B[ri][ci] = new King(Position(ri, ci), black, this);
			}
			else
			{
				B[ri][ci] = nullptr;
			}
		}
	}
}
void Board::CInit()
{
	char C;
	ifstream  Rdr;
	Rdr.open("Castle.txt");
	for (int ri = 0; ri < 8; ri++)
	{
		for (int ci = 0; ci < 8; ci++)
		{
			Rdr >> C;
			if (C == 'p')
			{//white pawn
				//B[ri][ci] = nullptr;
				B[ri][ci] = new Pawn(Position(ri, ci), white, this);
			}
			else if (C == 'P')
			{//black pawn
				//B[ri][ci] = nullptr;
				B[ri][ci] = new Pawn(Position(ri, ci), black, this);
			}
			else if (C == 'r')
			{//white rook
				B[ri][ci] = new Rook(Position(ri, ci), white, this);

			}
			else if (C == 'R')
			{//black rook
				B[ri][ci] = new Rook(Position(ri, ci), black, this);

			}
			else if (C == 'b')
			{//white bishop
				B[ri][ci] = new Bishop(Position(ri, ci), white, this);

			}
			else if (C == 'B')
			{//black bishop
				B[ri][ci] = new Bishop(Position(ri, ci), black, this);

			}
			else if (C == 'h')
			{//white Horse
				B[ri][ci] = new Horse(Position(ri, ci), white, this);

			}
			else if (C == 'H')
			{//black Horse
				B[ri][ci] = new Horse(Position(ri, ci), black, this);
			}
			else if (C == 'q')
			{//white Queen
				B[ri][ci] = new Queen(Position(ri, ci), white, this);

			}
			else if (C == 'Q')
			{//black Qeen
				B[ri][ci] = new Queen(Position(ri, ci), black, this);
			}
			else if (C == 'k')
			{//white Queen
				B[ri][ci] = new King(Position(ri, ci), white, this);

			}
			else if (C == 'K')
			{//black Qeen
				B[ri][ci] = new King(Position(ri, ci), black, this);
			}
			else
			{
				B[ri][ci] = nullptr;
			}
		}
	}
	Rdr.close();
}
void Board::FInit()
{
	char C;
	ifstream  Rdr;

	if (S.ri == 3 && S.ci == 9)
	{
		Rdr.open("saved.txt");

	}
	else
	{
	    Rdr.open("FILE.txt");
	}
	//Rdr.open("FILE.txt");
	for (int ri = 0; ri < 8; ri++)
	{
		for (int ci = 0; ci < 8; ci++)
		{
			Rdr >> C;
			if (C=='p')
			{//white pawn
				//B[ri][ci] = nullptr;
				B[ri][ci] = new Pawn(Position(ri, ci), white, this);
			}
			else if (C=='P')
			{//black pawn
				//B[ri][ci] = nullptr;
				B[ri][ci] = new Pawn(Position(ri, ci), black, this);
			}
			else if (C=='r')
			{//white rook
				B[ri][ci] = new Rook(Position(ri, ci), white, this);

			}
			else if (C == 'R')
			{//black rook
				B[ri][ci] = new Rook(Position(ri, ci), black, this);

			}
			else if (C == 'b')
			{//white bishop
				B[ri][ci] = new Bishop(Position(ri, ci), white, this);

			}
			else if (C == 'B')
			{//black bishop
				B[ri][ci] = new Bishop(Position(ri, ci), black, this);

			}
			else if (C=='h')
			{//white Horse
				B[ri][ci] = new Horse(Position(ri, ci), white, this);

			}
			else if (C=='H')
			{//black Horse
				B[ri][ci] = new Horse(Position(ri, ci), black, this);
			}
			else if (C=='q')
			{//white Queen
				B[ri][ci] = new Queen(Position(ri, ci), white, this);

			}
			else if (C == 'Q')
			{//black Qeen
				B[ri][ci] = new Queen(Position(ri, ci), black, this);
			}
			else if (C == 'k')
			{//white Queen
				B[ri][ci] = new King(Position(ri, ci), white, this);

			}
			else if (C=='K')
			{//black Qeen
				B[ri][ci] = new King(Position(ri, ci), black, this);
			}
			else
			{
				B[ri][ci] = nullptr;
			}
		}
	}
	Rdr.close();
}
void Board::DisplayMsg()
{
	if (Turn== white)
	{
		cout << "white's Turn:  ";
	}
	else
	    cout << "black's Turn(r,c):  ";
}
void Board::Grid()
{
	

	int s = 50;
	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 8; x++)
		{
			if ((x + y) % 2 == 0)
			{
				setfillstyle(SOLID_FILL, 7);
			}
			else
			{
				setfillstyle(SOLID_FILL, 8);

			}
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			bar(y1, x1, y2, x2);

		}
	}
}
void Board::PrintBoard()
{
	system("cls");
	for (int ri = 0; ri < 8; ri++)
	{
		for (int ci = 0; ci < 8; ci++)
		{
			if (B[ri][ci] == nullptr)
			{
				cout << "-";
			}
			else
			{
				B[ri][ci]->Draw();
			}
		}
		cout << endl;
	}
}
void Board::move(Position S, Position E)
{
	int s = 50;
	int ex=E.ri, ey=E.ci;
	if (B[ex][ey] != nullptr)
	{
		int x = ex, y = ey;
		if ((x + y) % 2 == 0)
		{
			setcolor(7);
			setfillstyle(SOLID_FILL, 7);
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			bar(y1, x1, y2, x2);


		}
		if ((x + y) % 2 != 0)
		{
			setcolor(8);
			setfillstyle(SOLID_FILL, 8);
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			bar(y1, x1, y2, x2);


		}
	}
	//no characters only onjects of piece with properties
	B[E.ri][E.ci] = B[S.ri][S.ci];
	int sx = S.ri, sy = S.ci;
	B[S.ri][S.ci] = nullptr;
	if (B[S.ri][S.ci] == nullptr)
	{
		int x = sx, y = sy;
		if ((x + y) % 2 == 0)
		{
			setcolor(7);
			setfillstyle(SOLID_FILL, 7);
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			bar(y1, x1, y2, x2);


		}
		if ((x + y) % 2 != 0)
		{
			setcolor(8);
			setfillstyle(SOLID_FILL, 8);
			int x1 = x * s, y1 = y * s, x2 = (x + 1) * s - 0, y2 = (y + 1) * s - 0;
			bar(y1, x1, y2, x2);


		}
	}
	
	//B[E.ri][E.ci]->UnDraw();
	//B[S.ri][S.ci]->UnDraw();

}
void Board::SelectPiece()
{
	while (!ismouseclick(WM_LBUTTONDOWN))
	{
	}
	getmouseclick(WM_LBUTTONDOWN, S.ci, S.ri);
	S.ri = (S.ri) / (400 / 8);
	S.ci = (S.ci) / (400 / 8);
	cout << "The mouse was clicked at: ";
	//S.ri=5;
	//S.ci=9;
	cout << "x=" << S.ri;
	cout << " y=" << S.ci << endl; // conversion
	if (S.ri == 1 && S.ci == 9)
	{
		Save();
	}
	if (S.ri == 3 && S.ci == 9)
	{
		for (int r = 0; r < 8; r++)
		{
			for (int c = 0; c < 8; c++)
			{
				B[r][c] = nullptr;
			}
		}
		Play();
		//Init();
		//Load();
		//PrintBoard();

	}
	if (S.ri == 5 && S.ci == 9)
	{
		for (int r = 0; r < 8; r++)
		{
			for (int c = 0; c < 8; c++)
			{
				B[r][c] = Undo[r][c];
				if (B[r][c] != nullptr)
				{
					B[r][c]->SetPosition(Ps[r][c].ri, Ps[r][c].ci);

				}

			}
		}
		Grid();
		PrintBoard();
	}
	if (S.ri == 7 && S.ci == 9)
	{
		for (int r = 0; r < 8; r++)
		{
			for (int c = 0; c < 8; c++)
			{
				B[r][c] = Redo[r][c];
				if (B[r][c] != nullptr)
				{
					B[r][c]->SetPosition(Ps[r][c].ri, Ps[r][c].ci);

				}

			}
		}
		Grid();
		PrintBoard();
	}
	
}
void Board::SelectDestination()
{
	while (!ismouseclick(WM_LBUTTONDOWN))
	{
	}
	getmouseclick(WM_LBUTTONDOWN, E.ci, E.ri);
	E.ri = (E.ri) / (400 / 8);
	E.ci = (E.ci) / (400 / 8);
	cout << "The mouse was clicked at: ";
	cout << "x=" << E.ri;
	cout << " y=" << E.ci << endl; // conversion
	if (S.ri == 1 && S.ci == 9)
	{
		Save();
	}
	if (E.ri == 3 && E.ci == 9)
	{
		for (int r = 0; r < 8; r++)
		{
			for (int c = 0; c < 8; c++)
			{
				//B[r][c] = nullptr;
			}
		}
		Play();
		//Init();
		//Play;
		//Load();
		//PrintBoard();
	}
	
}
bool Board::IsValidSelection()
{
	if (B[S.ri][S.ci] != nullptr)
	{
		if (B[S.ri][S.ci]->getColor() == Turn)
		{
			return true;
		}
	}
	return false;
}
bool Board::IsValidDestination()
{
	return (B[E.ri][E.ci] == nullptr || B[E.ri][E.ci]->getColor() != Turn);
		

}
void Board::Hightlight()
{
	
	int i = 1;
	//int count = 0;
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			E = Position(r, c);
			if (IsValidDestination() == true)
			{
				if (B[S.ri][S.ci]->IsLegalMove(E,i) == true)
				{
					//B[S.ri][S.ci];
					HL[r][c] = '*';
					//count++;
				}
			}
			else
			{
				HL[E.ri][E.ci] = ' ';

			}
		}
	}
	//int a = count;
	int s = 50; //count = 0;;
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			if (HL[r][c] == '*')
			{
				setcolor(RED);
				setfillstyle(SLASH_FILL, RED);
				int x1 = c * s, y1 = r * s, x2 = (c + 1) * s - 0, y2 = (r + 1) * s - 0;
				bar(x1, y1, x2, y2);
			}
		}
	}

}
void Board::Hightlight2()
{
	////copy TO DUMMY////
	
	///////////////////
	int Tri = E.ri;
	int Tci = E.ci;
	int i = 1;
	int count = 0;
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			E = Position(r, c);
			if (IsValidDestination() == true)
			{
				if (B[S.ri][S.ci]->IsLegalMove(E, i) == true)
				{

					B[S.ri][S.ci];
					HL[r][c] = '*';
					count++;
				}
			}
			else
			{
				HL[E.ri][E.ci] = ' ';

			}
		}
	}
	int a = count;
	int s = 50; //count = 0;;
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			if (HL[r][c] == '*')
			{
				setcolor(RED);
				setfillstyle(SOLID_FILL, RED);
				int x1 = c * s, y1 = r * s, x2 = (c + 1) * s - 0, y2 = (r + 1) * s - 0;
				bar(x1, y1, x2, y2);
			}
		}
	}
}

void Board::UnHighlight()
{
	int s = 50;
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			if (HL[r][c]=='*')
			{
				if ((r + c) % 2 == 0)
				{
					setcolor(7);
					setfillstyle(SOLID_FILL, 7);
					int x1 = c * s, y1 = r * s, x2 = (c + 1) * s - 0, y2 = (r + 1) * s - 0;
					bar(x1, y1, x2, y2);
				}
				if ((r + c) % 2 != 0)
				{
					setcolor(8);
					setfillstyle(SOLID_FILL, 8);
					int x1 = c * s, y1 = r * s, x2 = (c + 1) * s - 0, y2 = (r + 1) * s - 0;
					bar(x1, y1, x2, y2);
				}
			}
		}
	}
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			HL[r][c] = ' ';
		}
	}
}
void Board::FindKing(color turn, int &kr, int &kc)
{
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			if (B[r][c]!=nullptr && B[r][c]->getColor() == turn && B[r][c]->IsKing() == true )
			{
				kr = r;
				kc = c;
				return;
			}
		}
	}
}

bool Board::SelfCheck()
{
	Piece* TE[1][1];
	Piece* TS[1][1];

	TE[0][0] = B[E.ri][E.ci];
	TS[0][0] = B[S.ri][S.ci];
	//move(S, E);

	

	B[E.ri][E.ci] = B[S.ri][S.ci];
	B[S.ri][S.ci] = nullptr;
	TurnChange();
	if (IsCHECK())
	{
		B[S.ri][S.ci] = TS[0][0];
		B[E.ri][E.ci] = TE[0][0];
		//move(E, S);
		TurnChange();
		return true;//return true;
	}
	B[S.ri][S.ci] = TS[0][0];
	B[E.ri][E.ci] = TE[0][0];
	//move(E, S);
	TurnChange();


	return false;

}

bool Board::IsCHECK()
{
	color T;
	if (Turn == black)
	{
	     T = white;
	}
	if(Turn==white)
	{
		 T = black;
	}
	int Kr = 0, Kc = 0; 
	FindKing(T, Kr, Kc);
	Position DE = Position(Kr, Kc);
	//TurnChange();
	for (int r = 3; r < 8; r++)
	{

		for (int c = 7; c < 8; c++)
		{//                                              T
			if (B[r][c]!=nullptr && B[r][c]->getColor()==Turn && B[r][c]->IsLegalMove(DE, 0 )==true)
			{
				//TurnChange();
				return true;

				//cout <<"KING IS IN CHECK";
			}
		}
	}
	return false;
}
bool Board::CheckMate()
{
	Piece* DB[8][8];
	for (int rd=0; rd < 8; rd++)
	{
		for (int cd=0; cd < 8; cd++)
		{
			DB[rd][cd] = B[rd][cd];//dummy board made
		}
	}
	int KR, KC;
	FindKing(Turn, KR, KC);
	//Position KP(KR, KC);
	//TurnChange();//turn change to enemy white will hunt black king
	//Piece* TBS[1][1];
	//Piece* TBE[1][1];
	bool CM = true;
	for (int ri = 0; ri < 8; ri++)//move king then another function will run other peice to this king inside
	{
		for (int ci = 0; ci < 8; ci++)
		{
			
			if (DB[ri][ci] != nullptr && DB[ri][ci]->getColor() == Turn)
			{ 
				for (int r = 0; r < 8; r++)
				{
					for (int c = 0; c < 8; c++)
					{
						Position P2(r, c);
						Position P1(ri, ci);
						if (DB[ri][ci]->IsLegalMove(P2, 0) && !(P2.ri ==P1.ri && P2.ci==P1.ci))
						{
							S.ri = P1.ri;
							S.ci = P1.ci;
							E.ri = P2.ri;
							E.ci = P2.ci;

							if (!SelfCheck())
							{
								CM = false;
								return CM;
							}
							
						}
					}
				}
			}
		}
	}
	return CM;
	//TurnChange();
	return false;
}
void Board::Save()
{
	//color a;
	Rook* Ro;
	Pawn* Po;
	King* Ko;
	Bishop* Bo;
	Queen* Qo;
	Horse *Ho;
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			Ro = dynamic_cast<Rook*>(B[r][c]);
			Po = dynamic_cast<Pawn*>(B[r][c]);
			Ko = dynamic_cast<King*>(B[r][c]);
			Bo = dynamic_cast<Bishop*>(B[r][c]);
			Qo = dynamic_cast<Queen*>(B[r][c]);
			Ho = dynamic_cast<Horse*>(B[r][c]);
			if ( Ro != nullptr &&  Ro->getColor()==white)
			{
				LB[r][c] = 'r';
			}
			else if ( Ro != nullptr && Ro->getColor()==black)
			{
				LB[r][c] = 'R';

			}
			else if (Po != nullptr && Po->getColor() == white)
			{
				LB[r][c] = 'p';

			}
			else if (Po != nullptr && Po->getColor()==black)
			{
				LB[r][c] = 'P';

			}
			else if (Qo != nullptr && Qo->getColor() == white)
			{
				LB[r][c] = 'q';

			}
			else if (Qo != nullptr  && Qo->getColor()==black)
			{

				LB[r][c] = 'Q';

			}
			else if (Ko != nullptr  && Ko->getColor() == white)
			{
				LB[r][c] = 'k';

			}
			else if (Ko != nullptr  &&  Ko->getColor()==black)
			{
				LB[r][c] = 'K';

			}
			else if (Bo != nullptr  && Bo->getColor() == white)
			{
				LB[r][c] = 'b';

			}
			else if (Bo != nullptr &&  Bo->getColor() == black)
			{
				LB[r][c] = 'B';

			}
			else if (Ho != nullptr && Ho->getColor() == white)
			{
				LB[r][c] = 'h';

			}
			else if (Ho != nullptr && Ho->getColor() == black)
			{
				LB[r][c] = 'H';

			}
			else
			{
				LB[r][c] = '-';

			}
		}
	}

	ofstream Wtr;
	Wtr.open("saved.txt");
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			Wtr << LB[r][c];
			Wtr << " ";
		}
		Wtr << "\n";
	}
	Wtr.close();
}
void Board::Load()
{
	for (int ri = 0; ri < 8; ri++)
	{
		for (int ci = 0; ci < 8; ci++)
		{
			if (LB[ri][ci]=='p')
			{//white pawn
				//B[ri][ci] = nullptr;
				B[ri][ci] = new Pawn(Position(ri, ci), white, this);
			}
			else if (LB[ri][ci] == 'P')
			{//black pawn
				//B[ri][ci] = nullptr;
				B[ri][ci] = new Pawn(Position(ri, ci), black, this);
			}
			else if (LB[ri][ci] == 'r')
			{//white rook
				B[ri][ci] = new Rook(Position(ri, ci), white, this);

			}
			else if (LB[ri][ci] == 'R')
			{//black rook
				B[ri][ci] = new Rook(Position(ri, ci), black, this);

			}
			else if (LB[ri][ci] == 'b')
			{//white bishop
				B[ri][ci] = new Bishop(Position(ri, ci), white, this);

			}
			else if (LB[ri][ci] == 'B')
			{//black bishop
				B[ri][ci] = new Bishop(Position(ri, ci), black, this);

			}
			else if (LB[ri][ci] == 'h')
			{//white Horse
				B[ri][ci] = new Horse(Position(ri, ci), white, this);

			}
			else if (LB[ri][ci] == 'H')
			{//black Horse
				B[ri][ci] = new Horse(Position(ri, ci), black, this);
			}
			else if (LB[ri][ci] == 'q')
			{//white Queen
				B[ri][ci] = new Queen(Position(ri, ci), white, this);

			}
			else if (LB[ri][ci] == 'Q')
			{//black Qeen
				B[ri][ci] = new Queen(Position(ri, ci), black, this);
			}
			else if (LB[ri][ci] == 'k')
			{//white Queen
				B[ri][ci] = new King(Position(ri, ci), white, this);

			}
			else if (LB[ri][ci] == 'K')
			{//black Qeen
				B[ri][ci] = new King(Position(ri, ci), black, this);
			}
			else
			{
				B[ri][ci] = nullptr;
			}
		}
	}
}
void Board::CopyBoardU()
{
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			Undo[r][c] = B[r][c];
			if (B[r][c] != nullptr)
			{ 
				Ps[r][c].ri = r;
				Ps[r][c].ci = c;
			}
		}
	}
}

void Board::CopyBoardR()
{
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			Redo[r][c] = B[r][c];
			if (B[r][c] != nullptr)
			{
				Ps[r][c].ri = r;
				Ps[r][c].ci = c;
			}
		}
	}
}
bool Board::IsCastling()
{   
	//if turn is white
   if(S.ri==0 && E.ri==0 && B[S.ri][S.ci]->IsKing())//checked kingloc,check sr|sc==0,
   { 
	   if (E.ci>S.ci && (B[0][4]->IsKing()==true) && (E.ci==6)) 
	   {
		   Rook* WRR = dynamic_cast<Rook*>(B[0][7]);
		   if (WRR != nullptr)
		   {
			   return true;
		   }


	   }
	   if (E.ci < S.ci && (B[0][4]->IsKing()==true) && (E.ci == 2) )
	   {
		   Rook* WRL = dynamic_cast<Rook*>(B[0][0]);
		   if (WRL != nullptr)
		   {
			   return true;
		   }
	   }
	 
   }
   //turn is black
   if (S.ri == 7 && E.ri == 7 && B[S.ri][S.ci]->IsKing())//checked kingloc,check sr|sc==0,
   {
	   if (E.ci > S.ci && (B[7][4]->IsKing() == true) && (E.ci == 6))
	   {
		   Rook* WRR = dynamic_cast<Rook*>(B[7][7]);
		   if (WRR != nullptr)
		   {
			   return true;
		   }

	   }
	   if (E.ci < S.ci && (B[7][4]->IsKing() == true) && (E.ci == 2))
	   {
		   Rook* WRL = dynamic_cast<Rook*>(B[7][0]);
		   if (WRL != nullptr)
		   {
			   return true;
		   }
	   }

   }
   return false;
}
void Board::Play()
{
	int i = 0;
	//CInit();castling init
	  FInit();
	  Grid();
	  PrintBoard();
	  Turn = white;// (rand() % 2 == 0 ? white : black);


	while (1)
	{
	  PrintBoard();

		do
		{
			cout << endl;
			DisplayMsg();
			if (CheckMate())
			{
				cout << "CHECKMATE";
				cout << '\a';
				delay(1000);
				exit(1);
			}
			cout << endl;
			
		  do
	      {
			  cout << endl << "SELECT PIECE" << endl;//27 325
     			SelectPiece();
				
		  } while (IsValidSelection() == false);
		  cout << endl << "SELECT DESTINATION"<<endl;
		 //PrintBoard();
		  Hightlight();
		  SelectDestination();
		  UnHighlight();
		  PrintBoard();
		    if(IsValidDestination()==false)
			{ 
				cout << "\nInvalid Desitination" << endl;
			}
			if (IsCastling())
			{
				i = 2;
			}
			else
			{
				i = 0;
			}
		} while (IsValidDestination()==false);
		if (B[S.ri][S.ci]->IsLegalMove(E,i)==true)
		{
			if (i == 2)
			{
				if (Turn==white)
				{
					if (E.ci > S.ci)
					{
						Position R(0, 5);
						B[S.ri][S.ci]->move(E);
						B[S.ri][E.ci + 1]->move(R);

					}
					if (E.ci < S.ci)
					{
						Position R(0, 3);
						B[S.ri][S.ci]->move(E);
						B[S.ri][E.ci - 2]->move(R);
					}
					TurnChange();
				}
				if (Turn == black)
				{
					if (E.ci > S.ci)
					{
						Position R(0, 5);
						B[S.ri][S.ci]->move(E);
						B[S.ri][E.ci + 1]->move(R);

					}
					if (E.ci < S.ci)
					{
						Position R(0, 3);
						B[S.ri][S.ci]->move(E);
						B[S.ri][E.ci - 2]->move(R);
					}
					TurnChange();
				}
				
			}
			if (!SelfCheck() && i!=2)
			{
			     CopyBoardU();
				B[S.ri][S.ci]->move(E);
				CopyBoardR();
				TurnChange();
			}
				
			
		}
		else
		{
			cout << endl << "Invalid  Move " << endl;
		}
		
	}

}
Board::~Board()
{

}