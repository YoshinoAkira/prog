#include <iostream>
#include <ctime>
using namespace std;

class timer{
	clock_t start;
	public:
	timer();
	~timer();
};

timer::timer(){
	start = clock();
}

timer::~timer(){
	clock_t end;
	end = clock();
	cout << "経過時間:"
		<<end - start << "\n";
}

int main(){
	timer ob;
	char c;

	cout << "最後が[ENTER]になるようにキーを入力:";
	cin >> c;

	return 0;
}
