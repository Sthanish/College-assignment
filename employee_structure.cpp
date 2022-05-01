#include<stdio.h>
#include<conio.h>
struct employee{
char name[100],address[30];
int id,phone;
};
int main(){
	int n,i;
	struct employee e[i];
	printf("Enter the number of the student\n");
	scanf("%d",&n);
	printf("Enter the information of the student\n");
	for(i=1;i<=n;i++){
		printf("ID:");
		scanf("%d",&e[i].id);
		printf("Name:");
		scanf("%s",&e[i].name);
		printf("Address:");
		scanf("%s",&e[i].address);
		printf("phone:");
		scanf("%d",&e[i].phone);
		printf("\n");
		}
	printf("\nStudent info\n\n");
	for(i=1;i<=n;i++){
		printf("\nID:%d\nName:%s\nAddress:%s\nphone:%d\n",e[i].id,e[i].name,e[i].address,e[i].phone);
		}
return 0;
}
