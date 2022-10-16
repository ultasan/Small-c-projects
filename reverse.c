# include <stdio.h>
# include <string.h>

int main(){
	int i;
	char word[i];
	printf("What word would you like reversed?\n");
	scanf("%s",word);
	i = strlen(word);
	if(i>10){
		printf("your word is too long!\n");
		return 0;
}
	for(i;i>0;i--){
		printf("%c",word[i-1]);
		
}
}
