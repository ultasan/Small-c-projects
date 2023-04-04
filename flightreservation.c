# include <stdio.h>
# include <stdlib.h>
# include <string.h>

FILE* current_database;

struct Person{
    int id;
    char first_name[15];
    char last_name[15];
    char date[9];
    char destination[15];
    char origin[15];
    char flightnumber[15];

};

int query(){
    FILE *database = fopen("flights.txt", "r+");
    if(feof(database)){
        printf("Sorry the database is empty right now!\n");
        return 1;
    }
    char first_name[10];
    char last_name[10];
    char date[10];
    char destination[10];
    char origin[10];
    char first_name2[10];
    char last_name2[10];
    char date2[10];
    char destination2[10];
    char origin2[10];
    char buffer[1024];
    int id;
    int id2 = -1;
    int passengers;
    int x = 0;
    int check = -1;
    int i =0;
    int value = 0;
    fseek(database,0,SEEK_SET);
    printf("\nPlease enter your ID:[enter -1 if you don't know]\n");
    scanf("%d", &id);
    if(id == -1){
        printf("\nType the following info if you know it[if you don't know then type 0]\n");
        printf("First Name:  ");
        scanf("%s", first_name);
        fseek(database,0,SEEK_SET);
        
        printf("Here are some people with the same first name!\n");

        do{
            fgets(buffer,1024,database);
            sscanf(buffer,"%d %s %s %s %s %s\n", &id2, first_name2, last_name2, date2, destination2, origin2);
            x=-1;
            if(first_name[0] == '0'){
                break;
            }
            for(i=0;i<15;i++){
                if(first_name[i] == 0){
                    break;
                    }
                if(first_name2[i] != first_name[i]){
                    value == 1;
                    break;
                }
                if(first_name2[i] == first_name[i] && first_name[i]!=0){
                    value == 0;
                    x++;
                    printf("\nX:%d I:%d\n",x ,i);
                    if(strlen(first_name2) > strlen(first_name) || strlen(first_name2) < strlen(first_name)){
                        break;
                    }
                }
                if(x==i && value == 0 && strlen(first_name2) == strlen(first_name)){
                    printf("ID      First name          Last Name            Date               Destination                        Origin\n");
                    printf("=====================================================================================================================================================================\n");
                    printf("%d     %s     %s     %s       %s       %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
                    break;
                    }
            }
        }while(!feof(database));
       


        printf("\nLast Name: ");
        scanf("%s", last_name);

        fseek(database,0,SEEK_SET);
        printf("Here are some people with the same last name!\n");

        do{
            fgets(buffer,1024,database);
            sscanf(buffer,"%d %s %s %s %s %s\n", &id2, first_name2, last_name2, date2, destination2, origin2);
            x=-1;
            if(last_name[0] == '0'){
                break;
            }
            for(i=0;i<15;i++){
                if(last_name[i] == 0){
                    break;
                    }
                if(last_name2[i] != last_name[i]){
                    value == 1;
                    break;
                }
                if(last_name2[i] == last_name[i] && last_name[i]!=0){
                    value == 0;
                    x++;
                    printf("\nX:%d I:%d\n",x ,i);
                    if(strlen(last_name2) > strlen(last_name) || strlen(last_name2) < strlen(last_name)){
                        break;
                    }
                }
                if(x==i && value == 0 && strlen(last_name2) == strlen(last_name)){
                    printf("ID      First name          Last Name            Date               Destination                        Origin\n");
                    printf("=====================================================================================================================================================================\n");
                    printf("%d         %s                  %s                %s                %s                         %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
                    break;
                    }
            }
        }while(!feof(database));

        printf("\nDate: ");
        scanf("%s", date);
        fseek(database,0,SEEK_SET);
        printf("\nHere are some people with the same travel date!\n\n");

        do{
            fgets(buffer,1024,database);
            sscanf(buffer,"%d %s %s %s %s %s\n", &id2, first_name2, last_name2, date2, destination2, origin2);
            x=-1;
            if(date[0] == '0'){
                break;
            }
            for(i=0;i<15;i++){
                if(date[i] == 0){
                    break;
                    }
                if(date2[i] != date[i]){
                    value == 1;
                    break;
                }
                if(date2[i] == date[i] && date[i]!=0){
                    value == 0;
                    x++;
                    printf("\nX:%d I:%d\n",x ,i);
                    if(strlen(date2) > strlen(date) || strlen(date2) < strlen(date)){
                        break;
                    }
                }
                if(x==i && value == 0 && strlen(date2) == strlen(date)){
                    printf("ID      First name          Last Name            Date               Destination                        Origin\n");
                    printf("=====================================================================================================================================================================\n");
                    printf("%d         %s                  %s                %s                %s                         %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
                    break;
                    }
            }
        }while(!feof(database));

        printf("\nDestination: ");
        scanf("%s", destination);

        fseek(database,0,SEEK_SET);

        printf("\nHere are some people with the same destination!\n\n");

        do{
            fgets(buffer,1024,database);
            sscanf(buffer,"%d %s %s %s %s %s\n", &id2, first_name2, last_name2, date2, destination2, origin2);
            x=-1;
            if(destination[0] == '0'){
                break;
            }
            for(i=0;i<15;i++){
                if(destination[i] == 0){
                    break;
                    }
                if(destination2[i] != destination[i]){
                    value == 1;
                    break;
                }
                if(destination2[i] == destination[i] && destination[i]!=0){
                    value == 0;
                    x++;
                    printf("\nX:%d I:%d\n",x ,i);
                    if(strlen(destination2) > strlen(destination) || strlen(destination2) < strlen(destination)){
                        break;
                    }
                }
                if(x==i && value == 0 && strlen(destination2) == strlen(destination)){
                    printf("ID      First name          Last Name            Date               Destination                        Origin\n");
                    printf("=====================================================================================================================================================================\n");
                    printf("%d         %s                  %s                %s                %s                         %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
                    break;
                    }
            }
        }while(!feof(database));
        printf("\nOrigin: ");
        scanf("%s", origin);

        printf("\nHere are some people with the same place of origin!\n\n");
        fseek(database,0,SEEK_SET);
        do{
            fgets(buffer,1024,database);
            sscanf(buffer,"%d %s %s %s %s %s\n", &id2, first_name2, last_name2, date2, destination2, origin2);
            x=-1;
            if(origin[0] == '0'){
                break;
            }
            for(i=0;i<15;i++){
                if(origin[i] == 0){
                    break;
                    }
                if(origin2[i] != origin[i]){
                    value == 1;
                    break;
                }
                if(origin2[i] == origin[i] && origin[i]!=0){
                    value == 0;
                    x++;
                    printf("\nX:%d I:%d\n",x ,i);
                    if(strlen(origin2) > strlen(origin) || strlen(origin2) < strlen(origin)){
                        break;
                    }
                }
                if(x==i && value == 0 && strlen(origin2) == strlen(origin)){
                    printf("ID      First name          Last Name            Date               Destination                        Origin\n");
                    printf("=====================================================================================================================================================================\n");
                    printf("%d         %s                  %s                %s                %s                         %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
                    break;
                    }
            }
        }while(!feof(database));
    }


    fseek(database,0,SEEK_SET);

    if(id != -1){
        if(!feof(database)){
            do{
                fgets(buffer,1024,database);
                sscanf(buffer,"%d %s %s %s %s %s\n", &id2, first_name2, last_name2, date2, destination2, origin2);
            if(id2 == id){
                printf("ID      First name          Last Name            Date               Destination                        Origin\n");
                printf("=====================================================================================================================================================================\n");
                printf("%d     %s     %s     %s       %s       %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
                break;
            }
            }while(!feof(database));

        }

    }

    printf("\n");
    fclose(database);
}


int Delete(){
    FILE *database = fopen("flights.txt", "r+");
    int sure;
    char first_name[10];
    char last_name[10];
    char date[10];
    char destination[10];
    char origin[10];
    char first_name2[10];
    char last_name2[10];
    char date2[10];
    char destination2[10];
    char origin2[10];
    char buffer[10240];
    char buffer2[10240];
    int id;
    int id2 = -1;
    int passengers;
    int x = 0;
    int check = -1;
    int i =0;
    int value = 0;
    int line = 0;
    int l;
    int z = -1;
    int reference;
    int id
    FILE *temp = fopen("Newflights.txt", "w+");


    printf("\nWhat is your id?[Enter -1 if you don't know]\n");
    scanf("%d", &id);
    fseek(database,0,SEEK_SET);
    if(id != -1){
        if(!feof(database)){
            while(!feof(database)){
                fgets(buffer,1024,database);
                sscanf(buffer,"%d %s %s %s %s %s\n", &id2, first_name2, last_name2, date2, destination2, origin2);
                line++;
                if(id2 != id){
                    fputs(buffer, temp);
                }
                if(id2 == id){
                    printf("ID      First name          Last Name            Date               Destination                        Origin\n");
                    printf("=====================================================================================================================================================================\n");
                    printf("%d     %s     %s     %s       %s       %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
                }

            }
        }
    }
    fclose(database);
    
    fclose(temp);
    
}

struct Person* GetNewPerson(){
    int i = 0;
    int x = 0;
    int seats_left = 150;
    char first_name[15];
    char last_name[15];
    char destination[15];
    char origin[15];
    char date[15];
    char first_name2[15];
    char last_name2[15];
    char destination2[15];
    char origin2[15];
    char date2[15];
    char flightnumber[15];
    char buffer[1024];
    int id2 =0;
    int id = 0;
    int value = 0;
    int lines = 0;
    int current_line = 0;
    int y = 0;
    int z = 0;
    char first_name3[15];
    char last_name3[15];
    char destination3[15];
    char origin3[15];
    char date3[15];
    int help;


    printf("\nWhat is your first name?:\n");
    scanf("%s", first_name);
    printf("\nWhat is your last name?:\n");
    scanf("%s", last_name);
    printf("\nWhat day are you traveling?:\n");
    scanf("%s", date);
    printf("\nWhat is your destination?:\n");
    scanf("%s", destination);
    printf("\nWhere are you traveling from:?\n");
    scanf("%s", origin);

    int lengthofdest= 0;
    int lengthoforigin = 0;
    int lengthofdate = 0;




    FILE *database = fopen("flights.txt", "r+");
    if(!feof(database)){ 
        do{
            fgets(buffer,1024,database);
            sscanf(buffer,"%d %s %s %s %s %s\n", &id2, first_name2, last_name2, date2, destination2, origin2);
            lines++;
            for(i=0;i<15;i++){
                if(destination[i] == destination2[i] && destination[i] != 0){
                    x++;
                }
            }
            for(i=0;i<lengthoforigin;i++){
                if(origin[i] == origin2[i]){
                    y++;
                }
            }
            for(i=0;i<lengthofdate;i++){
                if(date[i] == date2[i]){
                    z++;
                }
            }
            if(feof(database)){
                id = id2 + 1;
                printf("id:%d", id);
                if(seats_left != 0){
                    printf("\nThere are %d seats left on this flight! You can still book!\n", seats_left);
                    }
                if(seats_left==0){
                    printf("\nThere are no more seats left on this plane, sorry!\n");
                    }

                }
            }while(!feof(database));
    }
    
    fseek(database,0,SEEK_SET);
    if(feof(database)){
        printf("EOF\n");
        id = 0;
        lines = 0;
    }
    fseek(database,0,SEEK_END);

    struct Person Person1;
    Person1.id = id;
    int length = sizeof(first_name)/sizeof(char);
    for(i=0;i<length;i++){
        Person1.first_name[i] = first_name[i];
    }
    length = sizeof(last_name)/sizeof(char);
    for(i=0;i<length;i++){
        Person1.last_name[i] = last_name[i];
    }
    length = sizeof(origin)/sizeof(char);
    for(i=0;i<length;i++){
        Person1.origin[i] = origin[i];
    }
    length = sizeof(date)/sizeof(char);
    for(i=0;i<length;i++){
        Person1.date[i] = date[i];
    }
    length = sizeof(destination)/sizeof(char);
    i=0;
    for(i=0;i<length;i++){
        Person1.destination[i] = destination[i];
    }
    printf("\nDestination: %s\n", destination);


    fprintf(database,"%d %s %s %s %s %s\n", Person1.id, Person1.first_name, Person1.last_name, Person1.date, Person1.destination, Person1.origin);

    printf("This is your information:\n");
    printf("ID      First name          Last Name            Date               Destination                        Origin\n");
    printf("=====================================================================================================================================================================\n");
    printf("%d               ", Person1.id);
    printf("  %s         ", Person1.first_name);
    printf("  %s          ", Person1.last_name);
    printf("   %s        ", Person1.date);
    printf("   %s        ", Person1.destination);
    printf("   %s          ", Person1.origin);


    printf("\n\n");


    fclose(database);
    printf("What would you like to do next?[1 for Searching for your booking, 2 for booking another appointment, and 3 for deleting an appointment]\n");
    scanf("%d", &help);
    if(help ==1){
        query();
    }
    if(help == 2){
        GetNewPerson();
    }
    if(help == 3){
        Delete();
    }
}
    
int querybyallinfo(){
    FILE *database = fopen("flights.txt", "r+");
    if(feof(database)){
        printf("Sorry the database is empty right now!\n");
        return 1;
    }
    char first_name[15];
    char last_name[15];
    char date[15];
    char destination[15];
    char origin[15];
    char first_name2[15];
    char last_name2[15];
    char date2[15];
    char destination2[15];
    char origin2[15];
    char buffer[1024];
    int id;
    int id2 = -1;
    int passengers;
    int x = -1;
    int check = -1;
    int i =0;
    int value = 1;
    int help = 0;
    fseek(database,0,SEEK_SET);
    printf("\nPlease enter your ID:[enter -1 if you don't know]\n");
    scanf("%d", &id);
    if(id != -1){
        while(!feof(database)){
        fgets(buffer, 1024, database);
        sscanf(buffer,"%d %s %s %s %s %s", &id2, first_name2, last_name2, date2, destination2, origin2);
        if(id2 == id){
            printf("ID      First name          Last Name            Date               Destination                        Origin\n");
            printf("=====================================================================================================================================================================\n");
            printf("%d     %s     %s     %s       %s       %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
        }
    }
    }
    fseek(database,0,SEEK_SET);
    if(id == -1){
        printf("\nType the following info if you know it[if you don't know then type 0]\n");
        printf("First Name:  ");
        scanf("%s", first_name);
        printf("\nLast Name: ");
        scanf("%s", last_name);
        printf("\nDate:  ");
        scanf("%s", date);
        printf("\nDestination:  ");
        scanf("%s", destination);
        printf("\nOrigin:  ");
        scanf("%s", origin);
        do{
            x=-1;
            fgets(buffer,1024, database);
            sscanf(buffer,"%d %s %s %s %s %s", &id2, first_name2, last_name2, date2, destination2, origin2);
            for(i=0;i<15;i++){
                if(strlen(first_name2)>strlen(first_name) || strlen(first_name2) < strlen(first_name)){
                    break;
                }
                if(strlen(last_name2)>strlen(last_name) || strlen(last_name2) < strlen(last_name)){
                    break;
                }
                if(strlen(date2)>strlen(date) || strlen(date2) < strlen(date)){
                    break;
                }
                if(strlen(destination2)>strlen(destination) || strlen(destination2) < strlen(destination)){
                    break;
                }
                if(strlen(origin2)>strlen(origin) || strlen(origin2) < strlen(origin)){
                    break;
                }


                if(first_name2[i] == first_name[i]){
                    value = 0;
                    x++;
                }
                if(first_name2[i] != first_name[i]){
                    value = 1;
                    break;
                }

                if(last_name2[i] == last_name[i]){
                    value = 0;
                    
                }

                if(last_name2[i] != last_name[i]){
                    value = 1;
                    break;
                    
                }
                if(date2[i] == date[i]){
                    value == 0; 
                }
                if(date2[i] != date[i]){
                    value = 1;
                    break;
                    
                }
                if(destination2[i] == destination[i]){
                    value = 0; 
                }
                if(destination2[i] != destination[i]){
                    value = 1;
                    break;
                    
                }
                if(origin2[i] == origin[i]){
                    value = 0;
                    
                }
                if(origin2[i] != origin[i]){
                    value = 1;
                    break;
                    
                }
                if(x==i && value == 0){
                    printf("ID      First name          Last Name            Date               Destination                        Origin\n");
                    printf("=====================================================================================================================================================================\n");
                    printf("%d         %s                  %s                %s                %s                         %s\n", id2, first_name2, last_name2, date2, destination2, origin2);
                    value = 0;
                    break;
                    }
            }
        }while(!feof(database));

    if(feof(database)){
        printf("Sorry, we couldn't find anyone with the given information in our database! Would you like to book a flight[enter 1]? Or would  you like to re-enter your information [enter 2]?\n");
        scanf("%d", &help);
        if(help == 1){
            fclose(database);
            GetNewPerson();
        }
        if(help == 2){
            fclose(database);
            querybyallinfo();
        }
    }

        
}

}


int main(){
    int help;
    printf("Hello! Welcome to American Airlines, how may we help?[1 for booking a flight; 2 for searching for your flight[by searching various parts individually]; 3 for searching your flight as a passenger[with all info] & 4 for deleting a booking]\n");
    scanf("%d", &help);
    if(help == 1){
        printf("\nThank you for choosing American Airlines!\n");
        GetNewPerson();
    }
    if(help == 2){
        printf("\nThank you for choosing American Airlines!\n");
        query();
    }
    if(help == 3){
        querybyallinfo();
    }
    if(help == 4){
        Delete();
    }

}