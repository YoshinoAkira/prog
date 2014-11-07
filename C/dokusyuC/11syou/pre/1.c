#include <stdio.h>
struct {
	int nizyou[10];
	int sanzyou[10];
}num;

int main(void){
	int i=0;
	for(i=1;i<=10;i++){
		num.nizyou[i-1]=i*i;
		num.sanzyou[i-1]=i*i*i;
	}

	for(i=0;i<10;i++){
		printf("%3d ",i+1);
		printf("%3d ",num.nizyou[i]);
		printf("%3d ",num.sanzyou[i]);
		printf("\n");
	}

	return 0;

}
