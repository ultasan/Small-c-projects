#include <stdio.h>
# include <math.h>

int compound(int p, int t, int r,int n);

int main(){
	int p,t,r,n;
	printf("What is your initial principle balance?: ");
	scanf(" %d",&p);
        printf("What is the number of time periods elapsed?: ");
        scanf(" %d",&t);
        printf("What is your interest rate?: ");
        scanf(" %d",&r);
        printf("What is the number of times interest applied per time period?: ");
        scanf(" %d",&n);

	compound(p,t,r,n);
	return 0;
	
}

int compound(int p, int t, int r, int n){
	int f1=(1+r/n);
	int f2 = pow(f1, n*t);
	int f3 = p*f2;
	printf("The final amount is: %d", f3);
	return 0;
	
	
}
