#include "Highscore.h"
namespace HiScore{
	Hiscore::Hiscore(int n) {
		array* list = new array(n);
	}
	Hiscore::~Hiscore() {}
	
	long Hiscore::GetHScore() {
		return s.GetScore();
	}
	void HiScore::addPlayer(Player p){
	
	}
	void Hiscore::Update(Score p) {
		
		if (p.GetScore()< s.GetScore()){
			s.~Score();
			s.Update(p.GetScore());
		}
	}
}