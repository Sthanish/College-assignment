#include<stdio.h>
#include<stdlib.h>
struct date{
	int day,month,year;
	
};
struct emp{
	int id;
	char name[100],add[20];
	struct date d;
}e;
int main(){
	printf("ID:");
	scanf("%d",&e.id);
	printf("name:");
	scanf("%s",&e.name);
	printf("address:");
	scanf("%s",&e.add);
	printf("day:");
	scanf("%d",&e.d.day);
	printf("month:");
	scanf("%d",&e.d.month);
	printf("year:");
	scanf("%d",& e.d.year);
	system("cls");
	printf("Id:%d\nName:%s\nAddress:%s\nDate:%d\\%d\\%d",e.id,e.name,e.add,e.d.year,e.d.month,e.d.day);
	
	
	
}
