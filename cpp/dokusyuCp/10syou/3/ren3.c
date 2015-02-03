#include <stdio.h>

int gcd(int a,int b){
	if(!b) return a;
	return gcd(b, a%b);
}

int main(void){
	int a,b,c;

	printf("2つの整数を入力: ");
	scanf("%d%d",&a,&b);
	c = gcd(a,b);
	printf("最大公約数は %d\n",c);

	return 0;
}
