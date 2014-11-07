#include <iostream>
#include <cstring>
using namespace std;

int main(){
	const int tate=3,yoko=10;
	char str[tate][yoko]={
		"first","second","third"
	};
	char *c=&str[0][0];
	cout << str[0] << "\n";
	cout << str[1] << "\n";
	cout << str[2] << "\n";
	char *str1 = (char *)"riot\n";
	cout << "strlen(riot)" << strlen(str1) << "\n";
	cout << "sizeof(riot)" << sizeof(str1) << "\n";
	for(int i=0;i<tate*yoko;i++){
		cout << *c;
		c++;
	}

	return 0;
}
