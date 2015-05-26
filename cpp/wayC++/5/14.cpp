#include <iostream>
using namespace std;

int factorial(int);

int main(){
	cout << "num:";
	int num;
	cin >> num;

	cout << factorial(num) << endl;

	return 0;
}


int factorial(int n){
	static int aho = 0;
	aho++;
	cout << aho << endl;
	if(n>0){
		return n * factorial(n-1);
	}else{
		return 1;
	}
}
