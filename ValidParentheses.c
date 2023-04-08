# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>



int push(char *s, char v, int size, char *arr, int var){
    int i;
    int value;
    arr[var] = v;
    var++;
    return var;
}

int Evaluate(char *parenth, char* brack, char* curly, int size, int x, int y, int z){
    int i;
    int value = 1;
    int happened = 1;
    int t;

    printf("Parenth: %d; Brack: %d; Curly: %d", x, y, z);

    printf("\n\n");

    printf("\n parentheses array:");
    for(i=0;i<x+1;i++){
        printf(" %c", parenth[i]);
    }
    printf("\n");

    printf("\n Brackets array:");
    for(i=0;i<y+1;i++){
        printf(" %c", brack[i]);
    }
    printf("\n");
    printf("\n Curly array:");
    for(i=0;i<z+1;i++){
        printf(" %c", curly[i]);
    }

    printf("\n\n");
    for(i=0;i<x+1;i++){
        if(parenth[i] == '('){
            for(t=i;t<x+1;t++){
                if(parenth[t] == ')'){
                    parenth[t] = 'c';
                    break;
                }
                if(parenth[t] != ')' && t==x){
                    return false;
                }
            }
        }
        if(parenth[i] == ')'){
            return false;
        }
        
    }

    printf("\n\n");
    for(i=0;i<y+1;i++){
        if(brack[i] == '['){
            for(t=i;t<y+1;t++){
                if(brack[t] == ']'){
                    brack[t] = 'c';
                    break;
                }
                if(brack[t] != ']' && t==y){
                    return false;
                }
            }
        }
        if(brack[i] == ']'){
            return false;
        }
        
    }


    printf("\n\n");
    for(i=0;i<z+1;i++){
        if(curly[i] == '{'){
            for(t=i;t<z+1;t++){
                if(curly[t] == '}'){
                    curly[t] = 'c';
                    break;
                }
                if(curly[t] != '}' && t==z){
                    return false;
                }
            }
        }
        if(curly[i] == '}'){
            return false;
        }
        
    }

    return true;


};


bool main(){
    int size;
    int i;
    char character;
    printf("\nHow many characters would you like to enter?: ");
    scanf("%d", &size);
    char *s = malloc(sizeof(char)*size);
    for(i=0;i<size;i++){
        printf("\nWhat is the %d character?:\n", i+1);
        scanf("\n%c", &character);
        s[i] = character;
    }
    int x = 0;
    int y = 0;
    int z = 0;
    char* parenth = malloc(sizeof(char)*size);
    char* brack = malloc(sizeof(char)*size);
    char* curly = malloc(sizeof(char)*size);
    for(i=0;i<size;i++){
        if(s[i] == '(' || s[i] == ')'){
            x = push(s,s[i], size, parenth, x);
        }
        if(s[i] == '[' || s[i] == ']'){
            y = push(s,s[i], size, brack,y);
        }
        if(s[i] == '{' || s[i] == '}'){
             z = push(s, s[i], size, curly,z);
        }
    }
    bool evaluation = Evaluate(parenth,brack,curly, size, x, y ,z);
    printf("\n\n");
        printf("\n parentheses array:");
    for(i=0;i<x+1;i++){
        printf(" %c", parenth[i]);
    }
    printf("\n");

    printf("\n Brackets array:");
    for(i=0;i<y+1;i++){
        printf(" %c", brack[i]);
    }
    printf("\n");
    printf("\n Curly array:");
    for(i=0;i<z+1;i++){
        printf(" %c", curly[i]);
    }
    printf("\n");
    if(evaluation == true){
        printf("This is Valid parentheses usage!\n");
    }
    if(evaluation == false){
        printf("This is not Valid parentheses usage!\n");
    }
    return evaluation;
};