#include <iostream>
#include <stdio.h>
using namespace std;

int rotate(int num);
long rotate(long num);

int main(){
	int a,b,c;
	int *p;
	long *pp;
	a=50;
	b=200;
	c=-2147483648;
	printf("%ld,%ld\n",sizeof(int),sizeof(long int));
	printf("%ld,%ld\n",sizeof(p),sizeof(pp));
	cout << rotate(a);
	cout << "\n";
	cout << rotate(b);
	cout << "\n";
	cout << rotate(c);
	cout << "\n";
	return 0;
}


int rotate(int num){
	int x;
	if(num & 0x80000000) x=1;
	else x=0;
	num<<=1;
	num+=x;
	return num;
}

long rotate(long num){
	long int x;
 	if(num & 0x80000000) x=1;
	 else x=0;
 	num<<=1;
	 num+=x;
 	return num;
}
