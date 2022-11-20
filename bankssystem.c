# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int deposit(char *currentuser){
	int money = 500;
	int deposit_amount;
	printf("How much would you like to deposit %s?: \n", currentuser);
	scanf("%d", &deposit_amount);
	if(deposit_amount > 500){
		printf("I'm sorry %s, you can only deposit a maximum of $500!\n", currentuser);
		do{
			printf("How much would you like to deposit %s?: \n", currentuser);
			scanf("%d", &deposit_amount);
			if(deposit_amount <= 500){ break;}
			printf("I'm sorry %s, you can only deposit a maximum of $500!\n", currentuser);
		}while(deposit_amount > 500);
	}
	
	if(deposit_amount < 500){
		printf("Transacting...\n");
		money = money + deposit_amount;
		sleep(5);
		printf("You have %d dollars left in the account!\n", money);
		printf("Ok you're payment is all done! Thank you for using our banking services!\n");
	}	

	return money;
	
	
}


int withdraw(char *currentuser){
	int money = 500;
	int withdraw_amount;
	printf("How much would you like to withdraw %s?: \n", currentuser);
	scanf("%d", &withdraw_amount);
	if(withdraw_amount > 500){
		printf("I'm sorry %s, you can only withdraw a maximum of $500!\n", currentuser);
		do{
			printf("How much would you like to withdraw %s?: \n", currentuser);
			scanf("%d", &withdraw_amount);
			if(withdraw_amount <= 500){ break;}
			printf("I'm sorry %s, you can only withdraw a maximum of $500!\n", currentuser);
		}while(withdraw_amount > 500);
	}
	
	if(withdraw_amount < 500){
		printf("Transacting...\n");
		money = money - withdraw_amount;
		sleep(5);
		printf("You have %d dollars left in the account!\n", money);
		printf("Ok you're payment is all done! Thank you for using our banking services!\n");
	}	

	return money;
	
	
}	
	



int main(){
	char *members[] = {"John", "Mary", "Carlos"};
	char newperson;
	int i;
	int total=0;
	char *currentuser;
	char action;
	printf("Who are you?:\n");
	scanf("%s",&newperson);
	for(i=0;i<3;i++){
		if(*members[i] == newperson){
			printf("Hi there %s\n", members[i]);
			currentuser = members[i];
			printf("So what would you like to do today?: \n");
			scanf(" %c", &action);
			if(action == 'd'){
				deposit(currentuser);
			}
			if(action == 'w'){
				withdraw(currentuser);
			}
			break;
		}
	}

}

