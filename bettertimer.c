# include <stdio.h>
# include <unistd.h>
# include <math.h>

int main(){
	int time,i;
	int days, hours, minutes, seconds;

	printf("How many days should be put on the timer?");
	scanf("%d",&days);
	
	printf("How many hours should be put on the timer?: ");
	scanf("%d", &hours);
	
	printf("How many minutes should be put on the timer?: ");
	scanf("%d", &minutes);
	
	printf("How many seconds should be put on the timer?: ");
	scanf("%d", &seconds);
	
	time = days*86400 + hours*3600 + minutes*60 + seconds;
	

	
	for(i=0;i<time;i++){
		printf("%d\n",time-i);
		sleep(1);
}

	


	return 0;
}
