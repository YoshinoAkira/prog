#include <iostream>
#include <cstring>
using namespace std;

int check(char *c);

int main(){
	char str[]="final";
	cout << "strlen(str):" << strlen(str) <<"\n";
	cout << "size:" << sizeof(str) << "\n";
	cout << "check:" << check(str) << "\n\n";
	char str1[3][7]={
		"first","second","third"
	};
	for(int i=0;i<3;i++){
		cout << "strlen(str[" << i << "]):" << strlen(str1[i]) << "\n";
		cout << "size(" << i << "):" << sizeof(str1[i]) << "\n";
		cout << "check:" << check(str1[i]) << "\n";
		cout << "\n";
	}
	return 0;
}

int check(char *c){
	int count=0;
	while(true){
		c++;
		count++;
		if(*c=='\0'){
			break;
		}
	}
	return count;
}
