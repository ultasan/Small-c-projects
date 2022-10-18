# include <stdio.h>
# include <string.h>

int main(){
	int i;
	int a;
	char x[23] = "hello me in the future";
	char *p = &x[0];
	i = strlen(x);
	for(a=0;a<i;a++){
		char *p = &x[a];
		printf("The %d value is %c\n",a,*p);
}

}
