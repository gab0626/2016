#pragma once
#include "lib/framework.hpp"
#include "Singleton.h"

class Title
{
private:

	Texture TitleBack;
	Texture TitleButton;
	Media TitleSound;
	Media CrickSound;
	Font Title_Font = Font("res/mini.otf");

public:
	Title();

	void SetUp();
	void UpDate();
	void SoundSet();
	void SoundStop();
	void Draw();
	void Reset();

	float TI_Alfa = 1.0f;
	float TIE_Alfa = 0.0f;
	float N_Alfa = 0.0f;
	float M_Alfa = 0.0f;
	float S_Alfa = 0.0f;
	float StartDraw = 0.0f;
	float Color_W = 1.0f;
	float Color_B = 0.0f;
	float Count = 0.0f;

	bool TIEFlag = false;
	bool StartFlag = false;
	
	Vec2f FirstBackSize = Vec2f(-750.0f, -500.0f);
	Vec2f EndBackSize = Vec2f(1500.0f, 1000.0f);
	Vec2f EndDraw = Vec2f(1024.0f, 512.0f);
	Vec2f N_Font = Vec2f(-700.0f, 300.0f);
	Vec2f M_Font = Vec2f(-420.0f, 300.0f);

	Vec2f S_FirstSize = Vec2f(-150.0f, -300.0f);
	Vec2f S_EndSize = Vec2f(300.0f, 150.0f);
	Vec2f S_EndDraw = Vec2f(256.0f, 128.0f);

	Vec2f M_Pos;
	

};