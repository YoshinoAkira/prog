#include <iostream>
using namespace std;

int main(){
	int count[10] = {0};
	char c;
	cout << "数字を入力:";
	while(cin.get(c)){
		if(c > '0' && c<='9'){
			count[c - '0']++;
		}
	}
	
	int max=0;
	for(int i=0;i<10;i++){
		if(max < count[i])
			max = count[i];
	}

	for(int i=max; i>=1;i--){
		for(int j=0;j<10;j++){
			if(count[j]>=i)
				cout << "*";
			else
				cout << " ";
			cout << " ";
		}
		cout << endl;
	}
	for(int i=0;i<10;i++){
		cout << i << " ";
	}
	cout << endl;


	return 0;
}
