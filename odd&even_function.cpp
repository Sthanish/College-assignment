#include<stdio.h>
#include<conio.h>
int check(int a){
	if(a%2==0){
		printf("It is even\n");
	}
	else{
		printf("It is odd\n");
	}
}
int main(){
	int x;
	printf("Enter any integer\n");
	scanf("%d",&x);
	check(x);
}
