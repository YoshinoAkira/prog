//templateを使っても多重定義ができる。
//つまり、templateを使っていても、具体的な引数を指定している場合、そちらが優先される。
//以下の例だと、char型のときはsquare(char)が用いられる。それ以外はType型のsquare

#include <iostream>
using namespace std;

template <class Type> Type square(Type);
char square(char);

int main(){
	cout << "num:"	;
	int a;
	float b;
	cout << sizeof(a) << " " << sizeof(b) << endl;
	char num;
	cin >> num;
	cout << square(num) << endl;

	cout << "sizeof ret= " << sizeof(square(num)) << endl;

	return 0;
}

template <class Type> Type square(Type x){
	return x * x;
}

char square(char c){
	return 'Z';
}
