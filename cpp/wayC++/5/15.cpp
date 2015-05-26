#include <iostream>
using namespace std;

int combination(int ,int );

int main(){
	int n=6;
	int r=2;
	cout << "n:";
	cin >> n;
	cout << "r:";
	cin >> r;

	cout << combination(n,r) << endl;

	return 0;
}

int combination(int n, int r){
	if(r==1){
		return n;
	}
	if(r==0 ||r==n){
		return 1;
	}
	return (combination(n-1,r-1) + combination(n-1,r));
}
