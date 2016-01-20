#pragma once
#include "lib/framework.hpp"
#include "Singleton.h"

class Opening
{
private:

	Font Opening_Font = Font("res/mini.otf");

public:
	Opening();

	void SetUp();
	void UpDate();
	void SoundSet();
	void SoundStop();
	void Draw();
	void Reset();

	float OP_Alfa = 0.0f;
	float OP_Alfa2 = 0.0f;
	float OP_Alfa3 = 0.0f;
	float OP_Alfa4 = 0.0f;
	float Color_B = 0.0f;
	float Color_W = 1.0f;

	Vec2f OP_StartBack = Vec2f(-750.0f, -500.0f);
	Vec2f OP_EndBack = Vec2f(1500.0f, 1000.0f);
	Vec2f Font_Pos = Vec2f(-200.0f, 0.0f);
	Vec2f Font_Pos2 = Vec2f(-600.0f, 0.0f);
};