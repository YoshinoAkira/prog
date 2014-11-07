#include <stdio.h>
#include <string.h>

struct sample{

	unsigned a: 1;
	unsigned b: 1;
	unsigned c: 1;
	unsigned d: 1;
	unsigned e: 1;
	unsigned f: 1;
	unsigned g: 1;
	unsigned h: 1;
};

union key_type{
	char ch;
	struct sample bits;
} key;

int main(void){
	printf("キーを押してください:");
 	char str[5];
	fgets(str,4,stdin);
	key.ch=str[0];
	printf("%c,%d\n",key.ch,key.ch);
	printf("バイナリコード:");

	if(key.bits.h)
		printf("1 ");
	else
		printf("0 ");
	if(key.bits.g)
		printf("1 ");
	else
		printf("0 ");
	if(key.bits.f)
		printf("1 ");
	else
		printf("0 ");
	if(key.bits.e)
		printf("1 ");
	else
		printf("0 ");
	if(key.bits.d)
		printf("1 ");
	else
		printf("0 ");
	if(key.bits.c)
		printf("1 ");
	else
		printf("0 ");
	if(key.bits.b)
		printf("1 ");
	else
		printf("0 ");
	if(key.bits.a)
		printf("1 ");
	else
		printf("0 ");

	printf("\n");

	return 0;
}
