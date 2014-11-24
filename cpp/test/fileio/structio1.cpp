#include <iostream>
using namespace std;
#include <cstdio>
#include <cstring>
#include "structio.h"

int main(){
	FILE *fp=fopen("sample.txt","wb");
	file f1,f2;
	f1.i=334;
	f1.ch='z';
	strcpy(f1.str[0],"this is sample one.");
	strcpy(f1.str[1],"this is sample two.");
	strcpy(f1.str[2],"this is sample three.");
	fwrite(&f1,sizeof(struct file),1,fp);
	showst(&f1);
	return 0;
}
