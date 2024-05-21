#include<stdio.h>
main(){
	int p,r,t;
	printf("enter a any number");
	scanf("%d%d%d",&p,&r,&t);
	float area;
	area=p*r*t/100;
	printf("%f",area);
}