#include <iostream>
using namespace std;

int main(){
	int a;

	cout << "正の整数値を入力せよ:";
	cin >> a;

	while(a>=0){
		cout << a << " ";
		a--;
	}

	return 0;
}
