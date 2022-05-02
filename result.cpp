#include<stdio.h>
int main(){
	int marks[100],pass=0,fail=0,i,n;
	printf("enter the number of students.\n");
	scanf("%d",&n);
	printf("Enter the marks of student.\n");
	for (i=0;i<n;i++){
	printf("student %d:",i+1);
	scanf("%d",&marks[i]);
	if(marks[i]<40){
		fail++;
		
	}
	else{
		pass++;
	}
	
	}
	printf("Number of pass students = %d\n",pass);
	printf("Number of fail students = %d",fail);
}
