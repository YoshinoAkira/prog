#include <iostream>
using namespace std;
#include <cstdio>
#include <cstring>
#include "structio.h"

int main(){
	FILE *fp=fopen("sample4.txt","wb");
	file f1[3];
	for(int i=0;i<3;i++){
		f1[i].i=100*(i+1)+10*(i+1);
		f1[i].ch=70+i;	
		strcpy(f1[i].str[0],"this is sample one.");
		strcpy(f1[i].str[1],"this is sample two.");
		strcpy(f1[i].str[2],"this is sample three.");	
	}
	fwrite(&f1,sizeof(struct file),3,fp);
//	showst((struct file *)&f1);
	showst(&f1[0]);
	showst(&f1[1]);
	showst(&f1[2]);
	return 0;
}
