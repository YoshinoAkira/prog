#include <iostream>
using namespace std;

int main(){
	float *f;
	long *l;
	char *c;
	
	f = new float;
	l = new long;
	c = new char;

	*f=50.5;
	*l=334334;
	*c='u';
	cout << *f << " " << *l << ' ' << *c << "\n";
 	return 0;

}
