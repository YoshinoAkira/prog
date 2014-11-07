#include <stdio.h>
#include <stdlib.h>
int main(void){
	double *p=(double *)malloc(sizeof(double));
	*p=99.01;
	printf("%f\n",*p);
	free(p);
	printf("%f\n",*p);
	return 0;
}
