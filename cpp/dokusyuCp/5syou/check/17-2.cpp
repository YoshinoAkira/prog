//謎のセグフォ

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void reverse(char *,int count = -1);

int main(){
	char *ch=(char *)"this is example17-2.";
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
	int len = strlen(str)+1;
	char *tmp=new char[len];
	cout <<"len:" << len << endl	;
	if(count == -1){
		count = len-1;
	}

	cout << "count:" << count << endl;
	char *strhead=new char[len];
	char *tmphead=new char[len];
	strhead=str;
	tmphead=tmp;
	strcpy(tmphead,strhead);
	printf("%p:%p\n",strhead,str);
	printf("%p:%p\n",tmphead,tmp);
	cout << "逆\n";
	for(int i=count-1;0<=i;i--){
		*tmp = str[i];
		cout << *tmp++;
	}

	cout << "\n順\n";
	for(int i=count;;i++){
		*tmp=str[i];
		if(*tmp=='\0'){
			break;
		}	
	
		cout << *tmp++;

	}
	cout << "tmphead:" << tmphead << endl;
	cout << "str:" << str << endl;
	cout << "strhead:" << strhead << endl;
	cout << "tmp:" << tmp <<endl ;
	cout << "\n終わり\n";
	
	str;
	tmp=tmphead;

	cout << "tmphead:" << tmphead << endl;
	cout << "str:" << str << endl;
	cout << "strhead:" << strhead << endl;
	cout << "tmp:" << tmp <<endl ;
	cout << "\n終わり\n";
	
	cout << "あいうえい\n";
	strcpy(str,tmp);
/*
	while(1){
		cout << "k" ;
		
		*strhead = *tmphead;

		if(*strhead=='\0'){
			break;
		}

		strhead++;
		tmphead++;
}
*/


	cout << "メインへ\n";	
}
