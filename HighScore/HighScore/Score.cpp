#include "Score.h"
namespace HiScore {
	Score::Score() {
		score = 0;
	}
	Score::~Score() {}
	long Score::GetScore() {
		return score;
	}
	void Score::Update(long add) {
		score = score + add;
	}
	void Score::ResetScore() {
		score = 0;
	}
}