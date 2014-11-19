#include <iostream>
using namespace std;
#include <cstdlib>

long mystrtol(char *start,char **end,int base=10){
	return strtol(start,end,base);
}

int main(){
	long x;
	char *s1 = "100234";
	char *p;

	x=mystrtol(s1,&p,16);
	cout << "基数16: "<< x << "\n";

	x=mystrtol(s1,&p,10);
	cout << "基数10: "<< x << "\n";
	
	x=mystrtol(s1,&p,2);
	cout << "基数2: "<< x << "\n";

	x=mystrtol(s1,&p);
	cout << "基数10: "<< x << "\n";

	return 0;
}
