#include <stdio.h>
#include <time.h>

int main(void){
	struct tm *systime;
	struct tm *grobal;
	time_t t,t2;
		
	t=time(NULL);
	t2=time(NULL);
	systime = localtime(&t);
	printf("時刻: %.2d:%.2d:%.2d\n",systime->tm_hour,systime->tm_min, systime->tm_sec);
	printf("日付: %.2d/%.2d/%.2d\n",systime->tm_mon+1,systime->tm_mday,systime->tm_year+1900);

	grobal = gmtime(&t2);
	printf("\n");
	printf("世界: %.2d:%.2d:%.2d\n",grobal->tm_hour,grobal->tm_min, grobal->tm_sec);
	printf("日付: %.2d/%.2d/%.2d\n",grobal->tm_mon+1,grobal->tm_mday,grobal->tm_year+1900);

	return 0;
}
