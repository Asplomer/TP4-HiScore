#ifndef SCORE_H
#define SCORE_H
#include <iostream>
using namespace std;
namespace HiScore {
	class Score {
	public:
		Score();
		~Score();
		long GetScore();
		void Update(long add);
		void ResetScore();
	private:
		long score;
	};
}
#endif // !1
