#include <iostream>
#include <cstring>
using namespace std;


class strtype{
	char *p;
	int len;
	public:
	strtype(char *str=(char *)"None");
	strtype(const strtype &ob);
	~strtype(){delete [] p;cout << "des\n";}
	void show(){cout << p << endl;}
	
	strtype operator+(strtype &ob);
	strtype &operator=(strtype ob);
	int operator<(strtype &ob);
	int operator>(strtype &ob);
	int operator==(strtype &ob);
};

strtype::strtype(char *str){
	len = strlen(str)+1;
	p=new char[len];
	strcpy(p,str);
	cout << "cons\n";
}

strtype::strtype(const strtype &ob){
	len = ob.len;
	p= new char[len];
	strcpy(p,ob.p);
	cout << "copy cons\n";
}

strtype strtype::operator+(strtype &ob){
	int length = len+ob.len-1;
	char *tempstr= new char [length];
	strcpy(tempstr,p);
	strcat(tempstr,ob.p);
	strtype temp(tempstr);
	return temp;
}

strtype &strtype::operator=(strtype ob){
	cout << "equalize:\n";
	delete [] p;
	len = ob.len;
	p = new char [len];
	strcpy(p,ob.p);
	cout << "end equalize:\n";
	return this;
}

int strtype::operator<(strtype &ob){
	if(strcmp(p,ob.p)>=0)//p>ob.p
		return 0;
	else if(strcmp(p,ob.p)<0)
		return 1;
}
int strtype::operator>(strtype &ob){
	if(strcmp(p,ob.p)>0)
		return 1;
	else
		return 0;
}

int strtype::operator==(strtype &ob){
	return !strcmp(p,ob.p);
}

int main(){
	strtype s1("this is s1 hoge."),s2("This is s2 hogehoge."),s3,s4;

	cout << "最初\n";
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	cout << endl;

	s3=s1+s2; //代入時にcopyコンストラクタ
	cout << endl;
	s4=s1;
	cout << endl;
	cout << "s3にs1とs2を連結したものを代入\n";
	s1.show();
	s2.show();
	s3.show();
	s4.show();
	cout << endl;
	
	cout << "s1==s2:" << (s1==s2) << endl ;
	cout << "s1==s4:" << (s1==s4) << endl;

	strtype s5("ab"),s6("bb"),s7("ac");
	cout << "s5",s5.show();
	cout << "s6" ,s6.show();
	cout << "s7" ,s7.show();
	cout << "s5>s6: " << (s5>s6) <<endl;
	cout << "s5<s6: " << (s5<s6) << endl;
	cout << "s5>s7: " << (s5>s7) << endl;
	cout << "s5<s7: " << (s5<s7) << endl;
	cout << "s6>s7: " << (s6>s7) <<endl;
	cout << "s6<s7: " << (s6<s7) << endl;

	
	return 0;
}
