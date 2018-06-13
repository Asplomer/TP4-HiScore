#include <iostream>
#include "Highscore.h"
using namespace std;
using namespace HiScore;
void main(){
	Player* splayer1 = new Player("Luigi");
	Player* splayer2 = new Player("Mario");
	HiScore::Hiscore* sSystem= new Hiscore();
	
	splayer1->Update(500);
	sSystem->Update(splayer1->GetScore());
	cout << "score:" << splayer1->GetScore() << " hscore:" << sSystem->GetHScore()<<endl;
	/*
	->Update(50000);
	cout <<"score:"<< sPlayer1->GetScore() << "  hscore: " << sPlayer1->GetHScore() << endl;
	sPlayer1->ResetScore();
	sPlayer1->Update(15);
	cout << "score:" << sPlayer1->GetScore() << "  hscore: " << sPlayer1->GetHScore() << endl;
	*/
	cin.get();
}