#include <stdio.h>

char *mystrcpy(char *tar, const char *src);
char *mystrcpy2(char *tar, const char *src);

int main(void){
	char str1[80]="this is str one.";
	char str2[80]="this is str two.";
	char *p;
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);
	p=mystrcpy2(str1,str2);
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);
	printf("p:%s\n",p);
		
	return 0;
}

char *mystrcpy(char *tar, const char *src){
	char *temp;
	temp=tar;
	while(*src){
		*tar++ == *src++;
 	}
	*tar='\0';
	return temp;
}

char *mystrcpy2(char *tar, const char *src){
	char *tmp;
	tmp = tar;
	while(*src){
		*tar++ == *src++;
	}
	*tar='\0';
	tar = tmp;
	return tar;
}
