#include <stdio.h>
#define three 3
#define two 2
#define one 1
#define four 4
#define five 5
#define six 6
int num[10]={0,1,2,3,4,5,6,7,8,9};


struct ren{
	int a:3;
	int b:3;
	int c:2;
	
};

int main(void){
	struct ren ren2;
	int numa,numb,numc;
	int i;
	for(i=0;i<10;i++){
		numa=num[i];
		numb=num[i];	
		numc=num[i];
		ren2.a=numa;
		ren2.b=numb;
		ren2.c=numc;	

		printf("%.2d, %.2d, %.2d\n",numa,numb,numc);
		printf("%.2d, %.2d, %.2d\n",ren2.a,ren2.b,ren2.c);
		printf("\n");
	}
	

	return 0;

}
