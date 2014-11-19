#include <iostream>
#include <ctime>
using namespace std;

class stopwatch{
	public:
		void start();
		void stop();
		void show();
		stopwatch(){keika=0;move = 0;start();}
		~stopwatch();
	public:
		time_t st;
		time_t keika;
		bool move;
};

stopwatch::~stopwatch(){
	show();
}

void stopwatch::start(){
	st = time(NULL);
	cout << "start:" << st << endl;
}

void stopwatch::stop(){
	st = time(NULL);
	cout << "stop:" << st << endl;
}

void stopwatch::show(){
	keika = time(NULL) - st;
	cout << "経過時間は" << keika << endl;
}

int main(){
	stopwatch s1,s2;

	cout << "enter:";
	char c;
	cin >> c;


	return 0;
}
