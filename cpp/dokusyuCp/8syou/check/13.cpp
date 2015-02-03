#include <iostream>
using namespace std;

int main(){
	int a,b,ans=1;
	cout << "底は？\n";
	cin >> a;
	cout << "指数は?\n";
	cin >> b;
	for(int i=0;i<b;i++){
		ans *= a;
	}
	cout << a <<"^" << b << "=" << ans <<"\n";

	return 0;
}
