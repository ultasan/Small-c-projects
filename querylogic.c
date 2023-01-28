int query(FILE *pFILE){
    char name[21];
    char name2[21];
    int score1 = 98;
    int score2;
    int i=0;
    char c;
    int j;
    int total_lines = 0;
    int line_counter = 1;
    int length;
    fseek(pFILE, 0, SEEK_SET);
    while(c != EOF){
        c = fgetc(pFILE);
        if(c == '\n'){
            total_lines++;
        }
    }
    fseek(pFILE, 0, SEEK_SET);
    printf("Which one of your students would you like to search for?:\n");
    scanf("%s", name);
    printf("\n");
    printf("Name:                       Score:\n");
    printf("=====================================\n");
    do {
        if(line_counter%2==0){
            fscanf(pFILE,"Score:%d\n", &score1);
            printf("\n");
        }
        if(line_counter%2 != 0){
            fscanf(pFILE,"Name:%s\n", name2);
            printf("\nName 2: %s\n", name2);
            length = strlen(name2);
            printf("\nlength:%d\n", length);
            if(name2 == name){
                printf("name 1: %s and name 2: %s", name, name2);
            }
            for(j=0;j<length;j++){
                if(name[j] == name2[j]){
                    printf("/nName in database: %s; name Inserted: %s/n", name2, name);
                    printf("\nLetter: %c\n", name2[j]);
                    if(j==length-1){
                        printf("HERE");
                        fscanf(pFILE,"Score:%d\n", &score2);
                        printf("\nThe student you are looking for is %s and their score is %d!\n", name, score2);
                        return 0;
                    }
                }
            }
        }
        line_counter++;
        i++;
    } while(i<total_lines);
}
