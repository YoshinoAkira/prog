#include <stdio.h>
#include <time.h>

int main(void){
	struct tm *systime;
	time_t t;
	
	t=time(NULL);
	systime = localtime(&t);
	printf("時刻: %.2d:%.2d:%.2d\n",systime->tm_hour,systime->tm_min, systime->tm_sec);
	printf("日付: %.2d/%.2d/%.2d\n",systime->tm_mon+1,systime->tm_mday,systime->tm_year+1900);

	return 0;
}
