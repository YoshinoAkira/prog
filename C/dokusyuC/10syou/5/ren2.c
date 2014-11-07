#include <stdio.h>

union ren2{
	long int li;
	int i[2];
};

long int itol(int i);

int main(void){
	int j=20000;
	long int lj;
	lj=itol(j);

	printf("%d, %ld\n",j,lj);
	return 0;
}


long int itol(int i){
	union ren2 ren;
	ren.i[0]=i;
	ren.i[1]=0;

	return ren.li;
}

