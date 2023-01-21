# include <stdio.h>

int writing(FILE*pFILE){
    char name[21];
    int score = 0;
    char letter = 'y';
    printf("Would you like to write anything?: [y/n]:");
    scanf("%c", &letter);
    if(letter == 'n'){
        printf("Ok closing the file!\n");
        fclose(pFILE);
        return 0;
    }
    if(letter == 'y'){
        while(letter == 'y'){
            fseek(pFILE, 0, SEEK_END);
            printf("\nName: ");
            scanf("%s", name);
            printf("\n");
            printf("Finals Score: ");
            scanf("%d", &score);
            printf("\nAre there any more students?\n");
            fprintf(pFILE,"Name: %s\nScore: %d\n", name, score);
            scanf("\n%c", &letter);
        }
    }
    fclose(pFILE);
    return 0;

}

int creating(){
    FILE *pFILE = fopen("name.txt", "w");
    if(pFILE == NULL){
        printf("\nI'm sorry, some error ocurred! Try again sometime soon.\n");
        return 0;
    }
    writing(pFILE);
    return 0;
}

int main(){
    creating();
    return 0;
}