#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char s[80];
	cout << "文字列を入力してください。\n";
	cin >> s;
	cout << "string:" <<s <<"\n";
	cout << "長さは " << strlen(s) << "\n";
	return 0;
}
