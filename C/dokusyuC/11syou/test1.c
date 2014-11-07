#include <stdio.h>

int count;
void f1(void);

int main(void){
	int i;
	f1();
	for(i=0;i<count;i++){
		printf("%d ",i);
	}

	return 0;
}
