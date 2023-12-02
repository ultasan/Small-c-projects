# include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i =0;
    int n;
    int j = 0;
    int max = 0;
    int xtemp = 0;
    int ytemp = 0;
    FILE* input = fopen("maxdist.in","r");
    fscanf(input,"%d\n",&n);
    int xcor[n];
    int ycor[n];
    for(i=0;i<n;i++){
        fscanf(input,"%d",&xcor[i]);
    }
    for(i=0;i<n;i++){
        fscanf(input,"%d",&ycor[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            xtemp = (xcor[i]-xcor[j+1])*(xcor[i]-xcor[j+1]);
            ytemp = (ycor[i] - ycor[j+1])*(ycor[i]-ycor[j+1]);
            if(max< abs(xtemp+ytemp)){
                max = xtemp + ytemp;
            }
        }
    }
    fclose(input);
    printf("\n\nMax: %d\n\n", max);

}
