#include <iostream>
using namespace std;
int main(){
	int x;

	cout << "正の整数値を入力してください。";
	cin >> x;

	cout << "その数の下一桁の数字は" << x % 10 << "です" << endl;

	return 0;
}
