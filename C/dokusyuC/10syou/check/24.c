#include <stdio.h>
#include <string.h>
struct sub {
	char string[80];
	int i;
}ren;

void change(struct sub strc);

int main(void){
	char str[80];
	fgets(str,80,stdin);
	str[strlen(str)-1]='\0';
	printf("str:%s\n",str);
	strcpy(ren.string,str);
	printf("ren.string:%s\n",ren.string);
	change(ren);
	printf("ren.string:%s\n",ren.string);

	return 0;
}

void change(struct sub strc){
	strcpy(strc.string,"new string");
	printf("in func:%s\n",strc.string);
}
