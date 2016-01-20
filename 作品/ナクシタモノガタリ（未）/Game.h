#pragma once
#include "lib/framework.hpp"
#include "Singleton.h"

class Game
{
private:

public:
	Game();

	void SetUp();
	void UpDate();
	void SoundSet();
	void SoundStop();
	void Draw();
	void Reset();
};