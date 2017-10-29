#include <stdio.h>

int main(){

	int x,y,p,s,total;

	printf("Enter the value of x: \n");
	scanf("%d",&x);

	printf("Enter the value of Y: \n");
	scanf("%d",&y);	
	p=x*x;
	s=y*y;
	total=p+s;
	printf("Total : %d * %d + %d * %d = %d\n",x,x, y,y, total);



}

