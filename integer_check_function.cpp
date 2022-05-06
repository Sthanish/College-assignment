#include<stdio.h>
#include<conio.h>
int check(int a){
	if(a<0){
		printf("It is negative\n");
	}
	else if(a==0){
		printf("It is neutral\n");
	}
	else{
		printf("It is positive\n");
	}
}
int main(){
	int x;
	printf("Enter any integer\n");
	scanf("%d",&x);
	check(x);
}
