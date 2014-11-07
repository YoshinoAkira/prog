#include <stdio.h>
void show_binary(unsigned u);

int main(void){
	unsigned short u;
	u=45678;

	printf("%5hu ",u);
	show_binary(u);
	u=u<<1;
	printf("%5hu ",u);
	show_binary(u);
	u=u>>1;
	printf("%5hu ",u);
	show_binary(u);

	return 0;
}

void show_binary(unsigned u){
	unsigned n;
	for(n=32768; n>0;n=n/2){
		if(u & n)
			printf("1 ");
		else
			printf("0 ");
	}
	printf("\n");
}
