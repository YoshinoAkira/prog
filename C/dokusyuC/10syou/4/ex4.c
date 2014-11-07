#include <stdio.h>

struct telemetry{
	unsigned fuel: 1;
	unsigned radio: 1;
	unsigned tv: 1;
	unsigned water: 1;
	unsigned food: 1;
	unsigned waste: 1;
}flt_recd;

void display(struct telemetry i);

int main(void){
	FILE *fp;
	int i;

	fp=fopen("flight","wb");
	
	for(i=0;i<100;i++){
		flt_recd.fuel = rand() % 2;
		flt_recd.radio = rand() % 2;
		flt_recd.tv = rand() % 2;
		flt_recd.water = rand() % 2;
		flt_recd.food = rand() % 2;
		flt_recd.waste = rand() % 2;
		
		display(flt_recd);
		fwrite(&flt_recd, sizeof flt_recd, 1, fp);
	}

	fclose(fp);

	return 0;
}


void display(struct telemetry i){
	if(i.fuel)
		printf("燃料異常なし\n");
	else
		printf("燃料不足\n");
	if(i.radio)
		printf("無線異常なし\n");
	else
		printf("無線障害\n");
	if(i.tv)
		printf("システム障害なし\n");
	else
		printf("TV機能不全\n");
	if(i.water)
		printf("給水異常なし\n");
	else
		printf("給水不足\n");
	if(i.food)
		printf("機内食供給異常なし\n");
	else
		printf("食料不足\n");
	if(i.waste)
		printf("廃棄物収納異常なし\n");
	else
		printf("廃棄物収納不可\n");
	printf("\n");
}
