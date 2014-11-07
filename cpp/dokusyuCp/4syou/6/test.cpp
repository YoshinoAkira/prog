#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char *c="this";
	cout << "c:" << c << "\n";

	char p[]="that";
	cout << "p:" << p << "\n";

	int num=40;
	char str[num];
	strcpy(str,"those");
	cout << "str:" << str << "\n";
	return 0;
}
