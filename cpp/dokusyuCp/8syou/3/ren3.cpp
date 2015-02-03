#include <iostream>
using namespace std;
int gcd(int a, int b){
	if(!b) return a;
	return gcd(b,a%b);
}


int main(){
	int a,b,c;
	cout << "input a:";
	cin >> a;
	cout << "input b:";
	cin >> b;
	c=gcd(a,b);
	cout << a << "と" << b <<"の最大公約数は" << c<<"\n";
	return 0;
}
