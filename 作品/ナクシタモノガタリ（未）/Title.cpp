#include "Title.h"

Title::Title()
{
	TitleBack = Texture("res/titleback.png");
	TitleButton = Texture("res/startbutton.png");
	TitleSound = Media("res/Media/Letters_in_your_mind.wav");
	CrickSound = Media("res/Media/Crick.wav");
}

void Title::SetUp()
{
	Title_Font.size(70);
}

void Title::UpDate()
{
	M_Pos = env.mousePosition();

	TI_Alfa -= 0.01f;

	if (TI_Alfa <= 0.0f)
	{
		TI_Alfa = 0.0f;
		N_Alfa += 0.01f;
	}
	if (N_Alfa >= 1.0f)
	{
		N_Alfa = 1.0f;
		M_Alfa += 0.01f;
	}
	if (M_Alfa >= 1.0f)
	{
		M_Alfa = 1.0f;
		S_Alfa += 0.01f;
	}
	if (S_Alfa >= 1.0f)
	{
		S_Alfa = 1.0f;
		Count++;
	}
	else if (env.isPushButton(Mouse::LEFT))
	{
		TI_Alfa = 0.0f;
		N_Alfa = 1.0f;
		M_Alfa = 1.0f;
		S_Alfa = 1.0f;
		Count++;
	}

	if (Count >=5)
	{
		Count = 5;

		if (M_Pos.x() > S_FirstSize.x() && M_Pos.x() < S_EndSize.x() - 150.0f)
		{
			if (M_Pos.y() > S_FirstSize.y() && M_Pos.y() < -150.0f)
			{
				if (env.isPushButton(Mouse::LEFT))
				{
					CrickSound.play();
					TitleSound.stop();
					TIEFlag = true;
				}
			}
		}
	}
	if (TIEFlag == true)
		TIE_Alfa += 0.005;

	if (TIE_Alfa >= 1.0f)
		StartFlag = true;
}

void Title::SoundSet()
{
	TitleSound.gain(0.3f);
	TitleSound.play();
	TitleSound.looping(true);
}

void Title::SoundStop()
{
	TitleSound.stop();
}

void Title::Draw()
{
	drawTextureBox(FirstBackSize.x(), FirstBackSize.y(), EndBackSize.x(), EndBackSize.y(), StartDraw, StartDraw, EndDraw.x(), EndDraw.y(), TitleBack);
	drawFillBox(FirstBackSize.x(), FirstBackSize.y(), EndBackSize.x(), EndBackSize.y(), Color(Color_W, Color_W, Color_W, TI_Alfa));
	Title_Font.draw("ナクシタ", Vec2f(N_Font.x(), N_Font.y()), Color(Color_B,Color_B,Color_B,N_Alfa));
	Title_Font.draw("モノガタリ", Vec2f(M_Font.x(), M_Font.y()), Color(Color_W,Color_W,Color_W,M_Alfa));
	drawTextureBox(S_FirstSize.x(), S_FirstSize.y(), S_EndSize.x(), S_EndSize.y(), StartDraw, StartDraw, S_EndDraw.x(), S_EndDraw.y(), TitleButton,Color(Color_W,Color_W,Color_W,S_Alfa));
	drawFillBox(FirstBackSize.x(), FirstBackSize.y(), EndBackSize.x(), EndBackSize.y(), Color(Color_W, Color_W, Color_W, TIE_Alfa));
}

void Title::Reset()
{
	TI_Alfa = 1.0f;
	TIE_Alfa = 0.0f;
	N_Alfa = 0.0f;
	M_Alfa = 0.0f;
	S_Alfa = 0.0f;
	StartDraw = 0.0f;
	Color_W = 1.0f;
	Color_B = 0.0f;
	Count = 0.0f;

	TIEFlag = false;
	StartFlag = false;
}

