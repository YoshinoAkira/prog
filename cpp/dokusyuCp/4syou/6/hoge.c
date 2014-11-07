#include <stdio.h>
#include <string.h>


int main(){
	char str[30];
	int a=3,b=4;
 	int num=a*b;
	char str2[num];
	strcpy(str2,"those");
	strcpy(str,"these");

	printf("str2:%s\n",str2);
	printf("str:%s\n",str);
	int no[num];
	no[3]=334;
	printf("%d\n",no[3]);
	printf("sizeof hairetu: %ld\n",sizeof(no));
	printf("kosuu: %ld\n",sizeof(no)/sizeof(no[0]));

	int n;
	printf("input n:");
	scanf("%d",&n);
	int hogehoge[n];
	hogehoge[0]=5;
	printf("%d\n",hogehoge[0]);
	printf("kosuu: %ld\n",sizeof(hogehoge)/sizeof(hogehoge[0]));
	return 0;
}
