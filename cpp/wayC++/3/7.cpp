#include <iostream>
using namespace std;


int main(){
	int num;
	cout << "正の整数値を入力せよ";
	cin >> num;
	if(num>0){
		while(num){
			cout << num%10;
			num/=10;
		}
	}else{
		cout << "1以上の整数を入力してください。" << endl;;
	}
	return 0;
}
