# include <stdio.h>


int main(){
	int  arr[3];
	printf("What would you like your first number to be: ");
	scanf("%d", &arr[0]);
	printf("What would you like your second number to be: ");
        scanf("%d", &arr[1]);
        printf("What would you like your third number to be: ");
        scanf("%d", &arr[2]);

	if(arr[0] >= arr[1] && arr[0] >= arr[2]){
		printf("The biggest number is %d\n", arr[0]);
		return 0;
}
	if(arr[1] >= arr[2] && arr[1] >= arr[0]){
		printf("The biggest number is %d\n", arr[1]);
		return 0;
}
	if(arr[2] >= arr[1] && arr[2] >= arr[0]){
		printf("The biggest number is %d\n", arr[2]);
		return 0;
}
	

}
