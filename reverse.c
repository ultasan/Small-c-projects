# include <stdio.h>

int reverse(char* p){
	int i;
	char *t;
	t = p;
	while(*p != '\0'){
		printf("%c", *p);
		*p++;
};
	printf("\n");

	while(p != t-1){
		printf("%c",*p);
		*p--;
};

	printf("\n");

};


int main(){
	char arr[20] = "Sanjeev";
	char *p = arr;
	reverse(p);
	
	
	
}
