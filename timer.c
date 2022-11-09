# include <stdio.h>
# include <unistd.h>

int main(){
	int time,i;
	printf("How much time should be put on the timer?");
	scanf("%d",&time);
	for(i=0;i<time;i++){
		printf("%d\n",time-i);
		sleep(1);
}
	return 0;
}
