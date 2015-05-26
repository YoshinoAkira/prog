//cout.width()は次の一回のみ

#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			cout.width(2);
			cout << i*j << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
