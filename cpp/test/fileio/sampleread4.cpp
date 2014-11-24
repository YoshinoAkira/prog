#include <iostream>
#include <cstdio>
using namespace std;

#include "structio.h"
	
int main(){
	FILE *fp=fopen("sample4.txt","rb");
	struct file f1[3];
	cout << "b" << endl;
	for(int i=0;i<3;i++){
		cout << 'c' << endl;
	}
	cout << "a"<< endl;
	fread(&f1,sizeof(struct file),3,fp);
/*
	for(int i=0;i<3;i++){
		showst(&f1[i]);
	}
*/
	showst(&f1[2]);

	return 0;
}
