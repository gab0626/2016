#include "Singleton.h"
#include "lib/framework.hpp"
#include "SceneManeger.h"



int main() {
	env;
	SceneManeger scenemaneger;

	scenemaneger.SetUp();
	scenemaneger.SoundSet();

  while (env.isOpen()) {
    // 開始
    env.begin();
  
	scenemaneger.UpDate();
	scenemaneger.Draw();
	scenemaneger.Shift();
	

    env.end();
  }
}
