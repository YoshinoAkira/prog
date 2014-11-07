#include <stdio.h>

int encode(int i);

int main(void){
	int i,num,num2;
	printf("sizeof int=%ld\n",sizeof(int));
	printf("sizeof char=%ld\n",sizeof(char));
	num=600000;
	i = encode(num);
	printf("%d を暗号化すると%d になります。\n",num,i);
	num2=i;
	i = encode(i);
	printf("%dを復号化すると %d になります。\n",num2,i);

	return 0;
	
}

int encode(int i){
	union crypt_type{
		int num;
		char c[4];
	}crypt;
	unsigned char ch;

	crypt.num=i;
	printf("crypt.c[0]=%d\ncrypt.c[1]=%d\ncrypt.c[2]=%d\ncrypt.c[3]=%d\n",crypt.c[0],crypt.c[1],crypt.c[2],crypt.c[3]);


	ch=crypt.c[0];
	crypt.c[0]=crypt.c[1];
	crypt.c[1]=ch;
	

	return crypt.num;
}
