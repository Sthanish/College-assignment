#include<stdio.h>
int main(){
	int i=1,j=0,a=5;
	while(i<=5){
		j=1;
		while(j<=a){
			printf("#");
			j++;
		}
		printf("\n");
		i++;
		a--;
	}
	return 0;
}
