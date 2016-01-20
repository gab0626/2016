#include "SceneManeger.h"

SceneManeger::SceneManeger()
{

}

void SceneManeger::SetUp()
{
	switch (SceneNum)
	{
	default:
		break;

	case OPENING:
		opening.SetUp();
		break;
		
	case TITLE:
		title.SetUp();
		break;

	case GAME:
		game.SetUp();
		break;
	}
}

void SceneManeger::UpDate()
{
	switch (SceneNum)
	{
	default:
		break;

	case OPENING:
		opening.UpDate();
		break;

	case TITLE:
		title.UpDate();
		break;

	case GAME:
		game.UpDate();
		break;
	}
}

void SceneManeger::SoundSet()
{
	switch (SceneNum)
	{
	default:
		break;

	case OPENING:
		opening.SoundSet();
		break;

	case TITLE:
		title.SoundSet();
		break;

	case GAME:
		game.SoundSet();
		break;

	}
}

void SceneManeger::SoundStop()
{
	switch (SceneNum)
	{
	default:
		break;

	case OPENING:
		game.SoundStop();
		break;

	case TITLE:
		opening.SoundStop();
		break;

	case GAME:
		title.SoundStop();
		break;
	}
}

void SceneManeger::Draw()
{
	switch (SceneNum)
	{
	default:
		break;

	case OPENING:
		opening.Draw();
		break;

	case TITLE:
		title.Draw();
		break;

	case GAME:
		game.Draw();
		break;
	}
}

void SceneManeger::Reset()
{
	switch (SceneNum)
	{
	default:
		break;

	case OPENING:
		opening.Reset();
		break;

	case TITLE:
		title.Reset();
		break;

	case GAME:
		game.Reset();
		break;
	}
}

void SceneManeger::Shift()
{
	switch (SceneNum)
	{
	default:
		break;

	case OPENING:
		if (opening.OP_Alfa4>=1.0 || env.isPushButton(Mouse::LEFT))
		{
			SceneNum = (SceneNum + 1) % 3;
			SetUp();
			SoundSet();
			SoundStop();
			Reset();
		}
		break;

	case TITLE:
		if (title.StartFlag == true)
		{
			SceneNum = (SceneNum + 1) % 3;
			SetUp();
			SoundSet();
			SoundStop();
			Reset();
		}
		break;

	case GAME:
		if (env.isPushButton(Mouse::LEFT))
		{
			SceneNum = (SceneNum + 1) % 3;
			SetUp();
			SoundSet();
			SoundStop();
			Reset();
		}
		break;
	}
}