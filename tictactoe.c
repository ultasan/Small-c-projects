# include <stdio.h>

char board[3][3] = {
                    {'_','_','_'}, 
                    {'_','_','_'}, 
                    {'_','_','_'}
                    };
void Print(){
    int i = 0;
    int j=0;
    for(i=0;i<3;i++){
        printf("|%c|", board[i][0]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        printf("|%c|", board[i][1]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        printf("|%c|", board[i][2]);
    }
    printf("\n\n");
}

void player1(){
    int column = -1;
    int row = -1;
    while(column < 0 || column > 3 || row < 0 || row > 3 || board[column][row] == 'X'  || board[column][row] == '0'){
        printf("You are Player 1, You use the character 'X' on the board! \n");
        printf("Which column would you like to play?: \n");
        scanf("%d", &column);
        printf("Column : %d", column);
        printf("Which row would you like to play?: \n");
        scanf("%d", &row);
    }
    if(board[column][row] != 'X' || board[column][row] != 'O'){
        board[column][row] = 'X';
    }
}


void player2(){
    int column = 0;
    int row = 0;
    while(column < 0 || column > 3 || row < 0 || row > 3 || board[column][row] == 'X'  || board[column][row] == '0'){
        printf("You are Player 2, You use the character '0' on the board! \n");
        printf("Which column would you like to play?: \n");
        scanf("%d", &column);
        printf("Column : %d", column);
        printf("Which row would you like to play?: \n");
        scanf("%d", &row);
    }
    if(board[column][row] != 'X' || board[column][row] != 'O'){
        board[column][row] = 'O';
    }
}
int Won() {
    int i;
    int j;
    int t;
    int l;
    int arr[3];
    int count = 0;
    int ocount = 0;
    for(i = 0; i < 9; i++){
        for(j = 0; j < 3; j++){
            if (board[i][j] == 'X') {
                count++;
                if (count == 3) {
                    printf("Player 1 wins\n");
                    return 0;
                }
            }
            if(board[i][j] == 'O') {
                ocount++;
                if(ocount == 3) {
                    printf("Player 2 wins\n");
                    return 1;
                }
            }
        }
    }
    if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ){
        printf("Player 1 Wins\n");
        return 0;
    }
    if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X' ){
        printf("Player 1 Wins\n");
        return 0;
    }
    if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' ){
        printf("Player 2 Wins\n");
        return 1;
    }
    if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X' ){
        printf("Player 2 Wins\n");
        return 1;
    }

}


int main(){
    int i = 0;;
    int l =0;
    int j = 0;
    int t = 0;
    for(i=0;i<9;i++){
        Print();
        player1();
        int won = Won();
        if(won == 0){
            printf("good job Player 1!\n");
            break;
        }
        if(won == 1){
            printf("good job Player 2!\n");
            break;
        }
        printf("\n\n\n");
        Print();
        player2();
        Print();
    }
    Print();
}