#include <iostream>
#include <ctime>
using namespace std;


class timer{
	time_t start;
	public:
	timer();
	~timer();
};

timer::timer(){
	start = time(NULL);
}

timer::~timer(){
	clock_t end;
	end = time(NULL);
	cout << "start:" << start << endl;
	cout << "end:" << end << endl;
	cout << "経過時間:"
		<<(double)(end-start)<< "\n";
}

int main(){
	timer ob;
	char c;


	cout << "最後が[ENTER]になるようにキーを入力:";
	cin >> c;

	return 0;
}


