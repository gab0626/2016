#pragma once
#include "lib/framework.hpp"
#include "Singleton.h"
#include "Opening.h"
#include "Title.h"
#include "Game.h"

enum Scene
{
	OPENING,
	TITLE,
	GAME,
};

class SceneManeger
{
private:
	int SceneNum = 0;
	Opening opening;
	Title title;
	Game game;

public:
	SceneManeger();

	void SetUp();
	void UpDate();
	void SoundSet();
	void SoundStop();
	void Draw();
	void Reset();

	void Shift();


};