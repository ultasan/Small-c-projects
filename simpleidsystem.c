# include <stdio.h>
# include <stdlib.h>






struct Person{
    int id;
    char name[10];

};

int query(){
    FILE *database = fopen("flights.txt", "r+");
    char name[10];
    int id;
    int check = -1;
    printf("\nWhat is your ID?:\n");
    scanf("%d", &id);
    fseek(database,0, SEEK_SET);
    while(id != check){
        fscanf(database, "%d %s\n", &check, name);
        printf("\n%d %s\n", check,name);
        if(check == id){
            printf("ID                      Name\n");
            printf("=================================\n");
            printf("%d                    %s", check, name);
            break;
        }
        if(feof(database)){
            printf("\nSorry, we couldn't find any such ID\n");
            break;
        }
    }
    printf("\n");
    fclose(database);
}





struct Person* GetNewPerson(FILE *database){
    int i;
    char name[10];
    char buffer[1024];
    int id = 0;
    int value = 1;
    int lines = 0;
    int current_line = 0;
    fseek(database,0,SEEK_SET);
    if(feof(database)){
        id = 1;
        lines = 1;
    }
    if(!feof(database)){
        do{
            if(!feof(database)){
                fgets(buffer,1024,database);
                lines++;
            }
            if(feof(database)){
                printf("1 ");
                lines=lines-1;
                value = 0;
                break;
            }
        } while(value == 1); 
        id = lines;
    }
    char destination[10];
    char origin[10];
    char date[10];
    printf("\nWhat is your name?:\n");
    scanf("%s", name);
    struct Person Person1;
    Person1.id = id;
    int length = sizeof(name)/sizeof(char);
    for(i=0;i<length;i++){
        Person1.name[i] = name[i];
    }
    fseek(database,0,SEEK_END);
    fprintf(database,"%d %s\n", Person1.id,Person1.name);

    printf("This is your information:\n");
    printf("ID                           Name\n");
    printf("=================================\n");
    printf("%d                       %s", Person1.id, Person1.name);
    printf("\n\n");
    fclose(database);
    query();
}
    




int main(){
    FILE *database = fopen("flights.txt", "r+");
    int help;
    printf("Hello! Welcome to the online employee list[1 for adding an employee & 2 for searching for an employee]\n");
    scanf("%d", &help);
    if(help == 1){
        GetNewPerson(database);
    }
    if(help == 2){
        query();
    }

}
