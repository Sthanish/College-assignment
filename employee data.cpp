#include<stdio.h>
struct employee {
	int id,salary;
	char name[20];
}e[100],temp;
int main(){
	int n,i,j;
	printf("Enter the number of employee.\n");
	scanf("%d",&n);
	printf("enter the information");
	for(i=0;i<n;i++){
	printf("employee %d",i+1);
	printf("\nID:");
	scanf("%d",&e[i].id);
	printf("Name:");
	scanf("%s",&e[i].name);
	printf("Salary:");
	scanf("%d",&e[i].salary);
	printf("\n\n");
	}
for(i=0;i< n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(e[i].salary<e[j].salary)
   {
    temp = e[j];
    e[j] = e[i];
    e[i] = temp;
   }
  }
 }
 for(i=0;i<n;i++)
 {
  printf("Name = %s\tId = %d\tSalary = %d\n",e[i].name, e[i].id, e[i].salary);
 }

}
