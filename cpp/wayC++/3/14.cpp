#include <iostream>
using namespace std;


int main(){
	cout << "正の整数値:";
	int num;
	cin >> num;
	int starnum=0;
	for(int i=1;i<=num;i++){
		starnum = i*2-1;
		for(int j=num-i;j>0;j--){
			cout << " ";
		}
		for(int j=starnum;j>0;j--){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
