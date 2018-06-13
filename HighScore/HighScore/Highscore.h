#ifndef HIGHSCORE_H
#define HIGHSCORE_H
#include <iostream>
#include "Score.h"
#include "Player.h"
using namespace std;
namespace HiScore{
	class Hiscore{
	public:
		Hiscore(int n);
		~Hiscore();
		long GetHScore();
		void Update(Score p);
		void addPlayer(Player p);
	private:
		Player list[];
	};
}
#endif // !1
