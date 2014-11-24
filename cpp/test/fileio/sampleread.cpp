#include <iostream>
#include <cstdio>
using namespace std;
#include "structio.h"

int main(){
	file f1;
	f1.i=10;
	f1.ch='a';
	FILE *fp = fopen("sample.txt","rw");
	fread(&f1,sizeof(struct file),1,fp);
	showst(&f1);
	
	return 0;
}
