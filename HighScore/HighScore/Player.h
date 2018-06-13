#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Score.h"
using namespace std;
namespace HiScore{
	class Player {
	public:
		Player(string n);
		~Player();
		void Update(long add);
		long GetScore();
	private:
		string name;
		Score s;
	};
}

#endif // !PLAYER_H

