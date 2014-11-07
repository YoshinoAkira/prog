#include <stdio.h>

struct st{
	unsigned a:1;
	unsigned b:1;
	unsigned c:1;
	unsigned d:1;
	unsigned e:1;
	unsigned f:1;
	unsigned g:1;
	unsigned h:1;
	unsigned i:1;
	unsigned j:1;
	unsigned k:1;
	unsigned l:1;
	unsigned m:1;
	unsigned n:1;
	unsigned o:1;
	unsigned p:1;
};
union uni{
	unsigned short u;
	struct st hoge;
};
unsigned short rotate(unsigned short num);
void show_binary(unsigned u);

int main(void){
	unsigned short num;
	printf("input num:");
	scanf("%hu",&num);

	printf("%5hu ",num);
	show_binary(num);

	num=rotate(num);
	printf("%5hu ",num);
	show_binary(num);

	return 0;
}

unsigned short rotate(unsigned short num){
	union uni un;
	un.u=num;
	char tmpch;
	tmpch = un.hoge.p;
	un.u=un.u<<1;
	un.hoge.a=tmpch;

	return un.u;
}

void show_binary(unsigned u){
	unsigned n;

	for(n=32768; n;n=n>>1)
		if(u & n)
			printf("1 ");
		else
			printf("0 ");

	printf("\n");

}
