#include <iostream>
#include <stdio.h>
using namespace std;

class prompt{
	int count;
	public:
	prompt(char *c);
	~prompt();
};

prompt::prompt(char *c){
	cout << c << "\n";
	cin >> count;
}

prompt::~prompt(){
	for(int i=0;i<count;i++){
		cout << '\a';
	}
	cout << "\n";
}

int main(){
	prompt p1((char *)"数字を入力する。");
	return 0;
}
