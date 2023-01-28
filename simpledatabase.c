# include <stdio.h>
# include <unistd.h>

int writing(FILE*pFILE){
    char name[21];
    int score = 0;
    char letter = 'y';
    printf("Would you like to write anything?: [y/n]:");
    scanf("%c", &letter);
    if(letter == 'n'){
        printf("Ok closing the file!\n");
        fseek(pFILE, 0, SEEK_SET);
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
            fprintf(pFILE,"Name:%s\n", name);
            fprintf(pFILE, "Score:%d\n", score);
            scanf("\n%c", &letter);
        }
        fseek(pFILE, 0, SEEK_SET);

    }
    return 0;

}

int reading(FILE* pFILE){
    char name[21];
    int score = 98;
    char string[10000];
    int i=0;
    char c;
    int total_lines = 0;
    int line_counter = 1;
    fseek(pFILE, 0, SEEK_SET);
    while(c != EOF){
        c = fgetc(pFILE);
        if(c == '\n'){
            total_lines++;
        }
    }
    fseek(pFILE, 0, SEEK_SET);
    printf("Name:                       Score:\n");
    printf("=====================================\n");
    while(i<total_lines){
        if(line_counter%2==0){
            fscanf(pFILE,"Score:%d\n", &score);
            printf("            %d", score);
            printf("\n");
        }
        if(line_counter%2 != 0){
            fscanf(pFILE,"Name:%s\n", name);
            printf("%s             ", name);
        }
        line_counter++;
        i++;
        
    }

}

int creating(){
    FILE *pFILE = fopen("name.txt", "r+");
    if(pFILE == NULL){
        printf("\nI'm sorry, some error ocurred! Try again sometime soon.\n");
        return 0;
    }
    writing(pFILE);
    reading(pFILE);
    fclose(pFILE);
    return 0;
}


int main(){
    creating();
    
    return 0;
}





