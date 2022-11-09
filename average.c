# include <stdio.h>
# include <math.h>


int main(){
	int i,x;
	int total=0;
	int avg;
	printf("How many numbers? ");
	scanf("%d",&x);
	int nums[x];
	for(i=0;i<x;i++){
		printf("What is your number?: ");
		scanf("%d", &nums[i]);
		total = nums[i] + total;
}
	printf("The total is: %d\n", total);
	printf("The average is: %d\n", total/x);
}

