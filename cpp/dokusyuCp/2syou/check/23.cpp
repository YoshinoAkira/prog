#include <iostream>
#include <cstdlib>
using namespace std;


class dice{
	int d;
	public:
	dice(){d=0;}
	void roll();
};


void dice::roll(){
	d=rand()%6 +1;
	cout << d <<"\n";
}

int main(){
	dice d;
	d.roll();
	d.roll();
	d.roll();

	return 0;
}
