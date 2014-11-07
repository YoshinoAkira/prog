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
union test{
	unsigned short int d;
	struct st hoge;
}uni;

int main(void){
	unsigned short num;
	printf("input num:");
	scanf("%hu",&num);
	uni.d=num;
	printf("sizeof short:%lu\n",sizeof(short int));
	printf("sizeof char:%lu\n",sizeof(char));

	printf("%hu ",uni.hoge.a);
	printf("%hu ",uni.hoge.b);
	printf("%hu ",uni.hoge.c);
	printf("%hu ",uni.hoge.d);
	printf("%hu ",uni.hoge.e);
	printf("%hu ",uni.hoge.f);
	printf("%hu ",uni.hoge.g);
	printf("%hu ",uni.hoge.h);
	printf("%hu ",uni.hoge.i);
	printf("%hu ",uni.hoge.j);
	printf("%hu ",uni.hoge.k);
	printf("%hu ",uni.hoge.l);
	printf("%hu ",uni.hoge.m);
	printf("%hu ",uni.hoge.n);
	printf("%hu ",uni.hoge.o);
	printf("%hu ",uni.hoge.p);

	printf("\n");
	return 0;
}
