#include<stdio.h>
int fact(int a){
	int i,result=1;
	for(i=1;i<=a;i++){
		result=result *i;
	}
	return result;
}
int main(){
	int n,ans;
	printf("enter any number to get factorial.\n");
	scanf("%d",&n);
	ans=fact(n);
	printf("factorial of %d = %d",n,ans);
}
