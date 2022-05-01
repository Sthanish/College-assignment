#include<stdio.h>
#include<conio.h>
int fact (int a){
	if(a<=1){
		return 1;
	}
	return a * fact(a-1);
	
}
int main(){
	int i;
	printf("Enter any number:");
	scanf("%d",&i);
	printf("factorial of %d = %d",i,fact(i));
}
