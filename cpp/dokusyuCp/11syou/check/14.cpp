#include <iostream>
#include <string.h>

using namespace std;

void rev_str(char *str1,char *str2);
void rev_str(char *str);

int main(){
	char s1[80],s2[80];
	strcpy(s1,"hello");
	cout << "first:\n";
	cout << "s1:" << s1 <<"\n";
	cout << "s2:" << s2 << "\n";
	rev_str(s1,s2);

	cout << "second:\n";
	cout << "s1:" << s1 << "\n";
	cout << "s2:" << s2 << "\n";

	cout << "third:\n";
	cout << "s1:" << s1 << "\n";
	cout << "s2:" << s2 << "\n";
	return 0;
}

void rev_str(char *str1,char *str2){
	char *top = str1;
	while((*str1)!='\0') str1++;
//	cout << "c";
//	cout <<"\n";
//	cout << "b\n";
	str1--;
	while(true){
		*str2=*str1;
//		cout << *str2 << "," << *str1 <<"\n";
		if(str1==top){
			str2++;
			*str2='\0';
			break;
		}
		str2++;
		str1--;
	}
}

void rev_str(char *str){
	char *tmp;
	char *p;
	p=str;

	while((*p)!='\0'){
		*tmp++ = *p++;
	}
	tmp--;
	while((*str)!='\0'){
		*str++ = *tmp--;
	}
}
