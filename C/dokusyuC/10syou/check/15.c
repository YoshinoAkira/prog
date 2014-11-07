#include <stdio.h>
#include <string.h>
struct member{
	char name[30];
	long int tel;
	long int time;
	int salary;
}men[10];

int main(void){
	FILE *fp=fopen("emp","rb");
	while(!feof(fp)){
		fread(men,sizeof(men),1,fp);
		int i;
		for(i=0;i<10;i++){
			printf("name:%s\n",men->name);
			printf("tel:%ld\n",men->tel);
			printf("time:%ld\n",men->time);
			printf("salary:%d\n",men->salary);
			men=men+1;
		}
	}

	return 0;

}
