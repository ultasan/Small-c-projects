# include <stdio.h>

int n = 0;

int sort(int arr[n]){
    int i,j = 0;
    for(i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            j = arr[i];
            arr[i]=arr[i-1];
            arr[i-1] = j;
        }
    }
}


int main(){
    int i = 0;
    FILE* input = fopen("sortarray.txt", "r");
    fscanf(input, "%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        fscanf(input, "%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        sort(arr);
    }
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    fclose(input);
}