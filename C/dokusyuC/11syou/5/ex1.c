#include <stdio.h>

int main(void){
	int i;
	i=100;
	printf("iの初期値: %d\n",i);

	i= i^21987;
	printf("最初のXOR実行後のi: %d\n",i);

	i=i^21987;
	printf("二番目のXOR実行後のi: %d\n",i);

	return 0;
}
