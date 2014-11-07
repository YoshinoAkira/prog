#include <stdio.h>
#include <time.h>

int i;
int main(void){
	register	int j;

	int k;
	clock_t start,finish;

	start = clock();
	for(k=0;k<100;k++){
		for(i=0;i<32000;i++){
		}
	}
	finish = clock();
	printf("レジスタを使わないループの刻み数: %ld \n",finish - start);
	start = clock();
	for(k=0;k<100;k++){
		for(j=0;j<32000;j++){
		}
	}
	finish=clock();
	printf("レジスタを使ったループの刻み数: %ld \n",finish - start);

	return 0;
}
