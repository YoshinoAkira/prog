#include <iostream>
using namespace std;


int main(){
	int num = 10000;
	int bi = 2;
	int count = 0;
	while(bi <= 10000){
		cout.width(4);
		cout << bi;
		bi *= 2;
		if(count==3){
			cout << endl;
		}else{
			cout << " ";
		}
		count = (count + 1) % 4;
	}
	cout << endl;
	return 0;
}
