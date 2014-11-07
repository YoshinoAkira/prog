#include <iostream>
using namespace std;
#include <cstring>

int main(){
	char *p;
	p = new char[100];
	strcpy(p,"This is a test.");
	cout << p <<"\n";

	
	{;}
	return 0;
}
