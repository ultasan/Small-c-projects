# include <stdio.h>
# include <string.h>

int main(){
	char sentence[100] = "hello";
	int consonants=0, blank=0, vowels=0, i, length=0;
	length = strlen(sentence);
	char vowels2[5] = {'a','e','i','o','u'};
	for(i=0;i<length;i++){
		if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' ||sentence[i] == 'o' ||sentence[i] == 'u' ){
			vowels++;
}
		if(sentence[i] == ' '){blank++;}
}
	int consonants1 =  vowels + blank;
	consonants = length - consonants1;
	printf("Blanks: %d\n", blank);
	printf("Consanants: %d\n", consonants);
	printf("Vowels: %d\n", vowels);
	printf("Length: %d\n", length);
}
