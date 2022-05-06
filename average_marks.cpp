#include<stdio.h>
int main(){
	int marks[10],i,sum=0;
	float avg;
	
	printf("enter marks of each student:\n");
	for (i=0;i<10;i++){
		scanf("%d\t",marks +i);
		sum+=*(marks+i);
	}
	avg=sum/10;
	printf("\nThe average is = %f\n\n",avg);
	for (i=0;i<10;i++){
		printf("%d\t",*(marks +i));
	}
	
	return 0;
}
