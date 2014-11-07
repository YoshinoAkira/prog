#include <iostream>
#include <ctime>
using namespace std;

class stopwatch{
	clock_t one,two,keika;
	clock_t init,end;
	public:
	stopwatch();
	~stopwatch();
	void start();
	void stop();
	void show();
	void reset();
};

stopwatch::stopwatch(){
	one=two=keika=0;
	init = clock();
	cout << "コンストラクタ\n";
}

stopwatch::~stopwatch(){
	end = clock();
	cout << "デストラクタ\n";
	cout << "総経過時間は" << end - init << "です\n";
}

void stopwatch::start(){
	one=clock();
	cout << "計測開始しました。\n";
}

void stopwatch::stop(){
	two = clock();
	keika += two-one;
	cout << "一時停止。\n";
}

void stopwatch::show(){
	cout << "経過時間は" << keika << "です。\n";
}

void stopwatch::reset(){
	one=two=keika=0;
	cout << "リセットしました。\n";
}

int main(){
	stopwatch s1,s2;
	s1.start();
	s1.stop();
	s1.show();
	s1.stop();
	s1.show();
	s1.reset();
	s1.show();

	s2.show();
	return 0;
}


