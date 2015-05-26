#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int num;
	cout << "整数値を入力せよ";
	cin >> num;

	int ans = log10(num)+1;
	cout << num << " は " << ans << " 桁" << endl;

	cout << "\nlog使わずに" << endl;
	
	int warukazu = 10;
	int keta = 1;
	while(num / warukazu >= 1){
		num /= warukazu;
		keta++;
	}
	cout << keta << "桁" << endl;
	return 0;
}
