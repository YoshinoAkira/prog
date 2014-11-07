#include <stdio.h>
#include <string.h>

struct member{
	char name[30];
	long int tel;
	long int time;
	int salary;
}men[10];

void enter(int num);
void men_write(struct member *st,FILE *fp);
void men_show(struct member *st);

int main(void){
	FILE *fp=fopen("emp2","w");
	char str[5];
	do{
		printf("何人目:");
		fgets(str,4,stdin);
		str[strlen(str)-1]='\0';
		if(str[0]=='q')
			break;
		int num=atoi(str)-1;
		enter(num);
		men_show(&men[num]);
		men_write(&men[num],fp);
		}while(str[0]!='q');
	fclose(fp);
}


void enter(int num){
	char str[30];
	printf("%d人目の内容を変更します。\n",num+1);
	printf("名前:");
	fgets(str,30,stdin);
	str[strlen(str)-1]='\0';
	strcpy(men[num].name,str);

	printf("電話番号:");
	fgets(str,30,stdin);
	str[strlen(str)-1]='\0';
	men[num].tel=atoi(str);
	
	printf("勤務時間:");
	fgets(str,30,stdin);
	str[strlen(str)-1]='\0';
	men[num].time=atoi(str);
	
	printf("時間給:");
	fgets(str,30,stdin);
	str[strlen(str)-1]='\0';
	men[num].salary=atoi(str);
	

}

void men_write(struct member *st,FILE *fp){
	fwrite(st,sizeof(st),1,fp);
}

void men_show(struct member *st){
	printf("name:%s\n",st->name);
	printf("tel:%ld\n",st->tel);
	printf("time:%ld\n",st->time);
	printf("salary:%d\n",st->salary);
}
