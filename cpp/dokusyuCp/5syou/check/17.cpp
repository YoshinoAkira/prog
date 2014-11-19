#include <iostream>
using namespace std;
#include <cstring>

char *reverse(char *str,int count=-1);

int main(){
	char *st="this is check1-7.";


	cout << "first: "<< st << endl;
	st=reverse(st);
	cout << "all: "<< st << endl;
	st=reverse(st,2);
	cout << "two: " << st << endl;

	return 0;
}


char *reverse(char *str, int count){
	int len=strlen(str+1);
	char *tmp = new char[len] ;
	char* strfir=str;
	char* tmpfir=tmp;
	if(count==-1){
		count = len;
	}

	for(int i=count-1;i>=0;i--){
		*tmp++=str[i];
		cout << str[i];
	}
	for(int i=count;*tmp++=str[i];i++)
		cout << str[i];
	cout << endl;

	
	tmp=tmpfir;
	str=strfir;
	cout << "before\n";
	for(;;){
		*tmp++=*str++;
		if(*tmp=='\0'){
			break;
		}
	}
	cout << "after\n";

	str=strfir;
	return str;
}
