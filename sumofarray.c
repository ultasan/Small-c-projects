# include <stdio.h>

int sumofarray(){
  int* ar;
  int i,n,sum=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
    sum =sum+ar[i];
}
  return sum;
};

int main(){
  int sum;
  sum = sumofarray();
  printf("The sum of the elements in the array is: %d", sum);
}
