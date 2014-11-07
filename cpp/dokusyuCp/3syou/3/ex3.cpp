#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class samp{
	char *s;
	public:
	samp(){s='\0';}
	~samp(){if(s)free(s); cout << "sを開放する\n";}
	void show() {cout << s << "\n";}
	void set(char *str);
};

void samp::set(char *str){
	s = (char *)malloc(strlen(str)+1);
	strcpy(s,str);
}

samp input(){
	char s[80];
	samp str;
	cout << "文字列の入力 :";
	cin >> s;
	str.set(s);
	return str;
}

int main(){
	samp ob;

	ob = input();
	ob.show();
	return 0;
}


