#include<stdio.h>
#include<string.h>
struct student{
	int roll, phone;
	char name[20],add[20];
	
}s;
int main(){
	int i=1;
	char what[10],ch;
	FILE*fp;
	fp=fopen("exam.txt","w");
	while(i==1){
		printf("Name:");
		scanf("%s",&s.name);
		printf("Roll No:");
		scanf("%d",&s.roll);
		printf("Address:");
		scanf("%s",&s.add);
		printf("phone:");
		scanf("%d",&s.phone);
		printf("\n\nDo you want to continue.\n");
		scanf("%s",&what);
		if(strcmp(what, "yes")==0){
			i=1;
		}
		else{
			i=2;
		}
		fprintf(fp,"Name:%s\nRoll no:%d\nAddress:%s\nPhone:%d",s.name,s.roll,s.add,s.phone);
		
	}
	fclose(fp);

fp=fopen("exam.txt","r");
while(1){
ch=fgetc(fp);
	if(ch==EOF){
		break;
	}
	printf("%c",ch);
}
fclose(fp);
return 0;
}
