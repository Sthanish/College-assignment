#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void delay(float time);
void delay(float time){
	float milli = 1000*time;
	clock_t start =clock();
	while(clock()<start + milli);
}

int main(){
	for (int i=1;i<10;i++){
		delay(1);
		printf("%d\t",i);
	}
	printf("\n\n\t\t\t\Time ranout\n\n\n");
	system("pause");
}
