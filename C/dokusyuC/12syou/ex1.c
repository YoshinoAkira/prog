#include <stdio.h>

int main(void){
	printf("ファイル名 %s の %d 行目を、"
			"日付 %s の時刻 %s に、コンパイル中です。\n",__FILE__,__LINE__,__DATE__,__TIME__);

	return 0;

}
