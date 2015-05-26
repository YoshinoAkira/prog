#include <iostream>
using namespace std;


int main(){
	char c;
	int pi = 3.14159265358979323846;
	int count[10]={0};
	cout << "数字を入力してください。";
	while(cin.get(c)){
		if(c > '0' && c <= '9'){
			count[c - '0']++;	
		}
	}
	cout << endl;
	for(int i=0;i<10;i++){
		cout << i << ": ";
		for(int j=0;j<count[i];j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i=0;i<10;i++){
		cout << count[i] << " ";
	}
	cout << endl;
	return 0;
}
