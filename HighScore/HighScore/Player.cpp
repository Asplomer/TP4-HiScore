#include "Player.h"
#include "Score.h"
namespace HiScore
{
	Player::Player(string n) {
		name = n;
	}
	Player::~Player(){
		name = "";
	}
	void Player::Update(long add){
		s.Update(add);
	}
	long Player::GetScore(){
	return	s.GetScore();
	}
}