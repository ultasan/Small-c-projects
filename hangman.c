# include <stdio.h>
# include <string.h>
# include <stdlib.h>
int main(){
	int guess_limit;
	int length, i;
	printf("How many letters are in the word?: \n");
	scanf("%d", &length);
	char *TrueWord = (char*)malloc(length*sizeof(char));
	printf("What should the true word be?: \n");
	scanf("%s", TrueWord);
	char guess;
	int count=0;
	char *MatchWord = (char*)malloc(length*sizeof(char));
	for(i=0;i<length;i++){printf("%c", TrueWord[i]);}
	printf("\n");
	length = strlen(TrueWord);
	guess_limit = length+3;
	char guessedcorrectly;
	int guessnumber;
	printf("You have %d guesses, Good Luck!\n", guess_limit);
	for(i=0;i<guess_limit+5;i++){
		for(i=0;i<length;i++){
			if(MatchWord[i] == TrueWord[i]){
				printf("%c", TrueWord[i]);
			}
			if(MatchWord[i] != TrueWord[i]){
				printf("_");
			}
			printf("\n");
			if(count == length){
				printf("You got the word! It was indeed %s", TrueWord); 
				return 0;}
		}
		printf("\n");
		printf("You have %d guesses left\n", guess_limit);
		scanf("%c",&guess);
		for(i=0;i<length;i++){
			if(guess == TrueWord[i]){ 
				printf("You got that right\n");
				MatchWord[i] = guess;
				count= count +1;
			}			
		guess_limit--;
		}
		

	}
	guess_limit = 0;
	free(TrueWord);
}