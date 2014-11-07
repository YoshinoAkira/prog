#include <iostream>
using namespace std;

int main(){
	int *p;

	p = new int [5];

	int i;
	for(i=0;i<5;i++) p[i] = i;

	for(i=0;i<5;i++){
		cout << "p: " << p[i] << "\n";
	}

	delete [] p;
	return 0;
}
