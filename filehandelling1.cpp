#include<stdio.h>
int main(){
	struct student{
		char name[20],add[20];
		int id,phone;
		
	}s;
	FILE*file;
	int i,n;
	file = fopen("information.txt","w");

	printf("How many records you want .\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("\nID:");
	scanf("%d",&s.id);
	printf("Name:");
	scanf("%s",&s.name);
	printf("Address:");
	scanf("%s",&s.add);
	printf("Contact:");
	scanf("%d",&s.phone);
	fprintf(file,"Id:%d\nName:%s\nAddress:%s\nContact:%d\n\n",s.id,s.name,s.add,s.phone);
	
}
	
	fclose(file);
	return 0;
	
	
	
}
