#include<stdio.h>
int main(){
	int num[100],i,j,n,temp;
	printf("How many number you want to enter?\n");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("num %d:",i+1);
		scanf("%d",&num[i]);
	}
	printf("\n\nIn ascending order\n\n");
	for (i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
		printf("num %d = %d\n",i+1,num[i]);
	}
	return 0;
}
