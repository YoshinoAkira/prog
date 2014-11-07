#include <stdio.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	char fname[90];

	printf("input name you want to delete\n");
	fgets(fname,90,stdin);
	fname[strlen(fname)-1]='\0';
	printf("are you sure to delete?\n");
	if(toupper(getchar())=='Y'){
		remove(fname);
	}

	return 0;
}
