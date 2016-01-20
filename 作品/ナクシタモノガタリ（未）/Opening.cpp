#include "Opening.h"

Opening::Opening()
{

}

void Opening::SetUp()
{
	Opening_Font.size(70);
}

void Opening::UpDate()
{
	if (env.isOpen())
	if (OP_Alfa <= 1.0)
	{
		OP_Alfa += 0.01;
	}
	else
	{
		OP_Alfa2 += 0.005;
	}

	if (OP_Alfa2 >= 1.0)
	{
		OP_Alfa2 = 1.0;
		OP_Alfa3 += 0.01;
	}
	if (OP_Alfa3 >= 1.0)
	{
		OP_Alfa3 = 1.0;
		OP_Alfa4 += 0.005;
	}

}

void Opening::SoundSet()
{

}

void Opening::SoundStop()
{

}

void Opening::Draw()
{
	drawFillBox(OP_StartBack.x(), OP_StartBack.y(), OP_EndBack.x(), OP_EndBack.y(), Color::white);
	Opening_Font.draw("k presents", Vec2f(Font_Pos.x(), Font_Pos.y()), Color(Color_B, Color_B, Color_B, OP_Alfa));
	drawFillBox(OP_StartBack.x(), OP_StartBack.y(), OP_EndBack.x(), OP_EndBack.y(), Color(Color_W, Color_W, Color_W, OP_Alfa2));
	Opening_Font.draw("このモノガタリはフィックションです。", Vec2f(Font_Pos2.x(), Font_Pos2.y()), Color(Color_B, Color_B, Color_B, OP_Alfa3));
	drawFillBox(OP_StartBack.x(), OP_StartBack.y(), OP_EndBack.x(), OP_EndBack.y(), Color(Color_W, Color_W, Color_W, OP_Alfa4));
}

void Opening::Reset()
{
	OP_Alfa = 0.0f;
	OP_Alfa2 = 0.0f;
	OP_Alfa3 = 0.0f;
	OP_Alfa4 = 0.0f;
}