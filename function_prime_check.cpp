#include<stdio.h>
int check(int a){
	int i,flag=0;
	for (i=1;i<=a;i++){
		if(a%i==0){
			flag++;
		}
		}
		return flag;
	}
int main(){
	int n,point;
	printf("Enter any number.\n");
	scanf("%d",&n);
	point = check(n);
	if(point==2){
		printf("%d is prime number",n);
		
	}
	else{
		printf("%d is composite number.",n);
	}
return 0;
}

