#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int i=1,entry(),mypass(),option(),account(),view_balance(),withdraw(),deposit(),cbalance=10000,sbalance=50000,my_balance;
long int cash,total;
char username[20],password[20],choice[5],value[5];
int main(){
	printf("welcome to this ATM\n\n");
	entry();
	
}
int entry(){
	while(i<=3){
	printf("enter your username: ");
	scanf("%s",&username);
	if (strcmp(username,"anish")==0){
		mypass();		
	}
	else{
		printf("\nInput Invalid\n");
		i++;	
	}
	}
	system("cls");
	printf("Sorry, your account is block due to multiple incorrect input.\nPlease contact your banks.");
	exit(0);
}
int mypass(){
	while(i<=3){
	printf("Enter your 4 digit transaction pin: ");
	scanf("%s",&password);
	if(strcmp(password,"1234")==0){
		option();
	}
	else{
		printf("\nInput Invalid\n");
		i++;
	}
	}
	system("cls");
	printf("Sorry, your account is block due to multiple incorrect password.\nPlease contact your bank.\n");
	exit(0);
}
int option(){
	system("cls");
	printf("\n\nselect the account you want to access");
    printf("\n\n1.Current Account\n2.Saving Account\n3.exit\nenter a number:");
    scanf("%s",&choice);
    printf("\n\n");
    if (strcmp(choice,"1") == 0){
    	my_balance=cbalance;
        account();
	}
    else if(strcmp(choice,"2") == 0){
    	my_balance=sbalance;
        account();
	}
    else if(strcmp(choice,"3") == 0)
        exit(0);
    else{
        printf("Input Invalid");
        option();
	}
}
int account(){
	system("cls");
	printf("\n\n1.View balance\n2.withdraw cash\n3.Deposit cash\n4.Exit\nEnter one choice:");
	scanf("%s",&value);
        if (strcmp(value,"1")== 0){
            view_balance();
		}
        else if (strcmp(value,"2")== 0){
            withdraw();
		}
        else if (strcmp(value,"3")== 0){
            deposit();
		}
        else if (strcmp(value,"4")== 0){
            option();
		}
        else{
            printf("Input Invalid");
            account();
		}
}

int view_balance(){
	system("cls");
	printf("\n\nDear Customer you have Rs.%d in your account.\n",my_balance);
	exit(0);
}
int withdraw(){
		system("cls");
        printf("\n\nEnter the amount you want to withdraw: Rs.");
        scanf("%d",&cash);
        total = my_balance - cash;
        printf("\nDear Customer you have withdraw Rs.%d", cash);
        printf("\nNow total balance is %d", total);
        exit(0);
}
int deposit(){
		system("cls");
        printf("\n\nEnter the amount you want to deposit:RS.");
        scanf("%ld",&cash);
        total = my_balance + cash;
        printf("\nDear Customer you have deposit Rs.%ld", cash );
        printf("\nNow, total balance is %ld", total);
        exit(0);
}
