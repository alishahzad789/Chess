#pragma once
#include "graphics.h"

class Unit
{

	int sri, sci, eri, eci;
	bool IsWhite, IsBlack;
public:
	Unit()
	{

	}
	Unit(int sr, int sc, int er, int ec) :sri(sr), sci(sc), eri(er), eci(ec)
	{
		IsWhite = false, IsBlack = false;
	}
	void SetColorBool(bool whito, bool blacko)
	{
		IsWhite = whito;
		IsBlack = blacko;
	}
	int Getsri()
	{
		return sri;
	}
	int Getsci()
	{
		return sci;
	}
	int Geteri()
	{
		return eri;
	}
	int Geteci()
	{
		return eci;
	}
	void DrawUnit()
	{
		if (IsWhite == true)
		{
			setfillstyle(1, 7);
		}
		if (IsBlack == true)
		{
			setfillstyle(1, 8);
		}
		bar(sri, sci, eri, eci);
	}
};

