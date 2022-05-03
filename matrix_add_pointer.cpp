#include <stdio.h>
#include <conio.h>
int main(){
	int x[3][3]={{4,5,6},{1,2,3},{6,7,8}};
	int y[3][3]={{2,5,1},{5,3,1},{2,3,6}};
	int i,j,z[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			*(*(z+i)+j)=*(*(x+i)+j)+*(*(y+i)+j);       //*(*(a+0)+0)=a[0][0]
			                                           //*(*(a+2)+1)=a[2][1]		
	}
}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%4d",*(*(z+i)+j));
		}
		printf("\n"); //it is required to make a new line after complete of one array i.e(j) to see it as matrix.
	}

return 0;


}
