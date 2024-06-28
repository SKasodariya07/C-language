// find third angle
#include<stdio.h>
main(){
	
	float a,b,c;
	
	printf("enter a first angle : \n");
	scanf("%f",&a);
	printf("enter a second number \n: ");
	scanf("%f",&b);
	
	c=180-(a+b);
	printf("third angle is : %0.2f\n",c);

}
