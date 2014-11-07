#include <iostream>
using namespace std;

class who{
	char dis;
	public:
	who(char c){
		dis = c;
		cout << dis << "のコンストラクタ\n";
	}
	~who(){
		cout << dis << "のデストラクタ\n";
	}
};

who make_who(){
	char ch;
	cout << "input char: ";
	cin >> ch;
	who ob(ch);
	return ob;
}

int main(){
	who w1 = make_who();
	who w2 = make_who();
	who w3 = make_who();
	make_who();
	who w4('A');
	return 0;
}
