//文字列をポインタではなく配列で定義するとできる
///////http://www9.plala.or.jp/sgwr-t/c/sec10-3.html/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void reverse(char *,int count = 0);

int main(){
	char ch[]="this is example17-2.";
	cout << "strlen(ch):" << strlen(ch) << endl;
	char *copy=new char [30];
	strcpy(copy,ch);
	cout << "first:" << ch << endl << endl;

	reverse(ch);
	cout << "reverse(ch):" << ch << "\n\n";

	reverse(ch,2);
	cout << "reverse(ch,2:) " << ch << "\n\n";

	return 0;
}



void reverse(char *str,int count){
	if(!count){
		count = strlen(str)-1;
	}

	cout << "count:" << count << endl;
	cout << "逆\n";
	
	char temp;
	for(int i=0,j=count;i<j;i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	
	
	cout << "\n終わり\n";
	cout << "メインへ\n";	
}
