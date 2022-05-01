#include<stdio.h>
#include<conio.h>
int sum(int w, int x);
int main(){
	int a,b;
	printf("Enter any two number:\n");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
int sum(int w,int x){
	printf("%d + %d = %d",w,x,w+x);
}
