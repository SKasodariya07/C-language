// celsius to fahranheit

#include<stdio.h>
main(){
	float c,f;
	
	printf("enter a celsius : \n");
	scanf("%f",&c);
	
	f=((1.8)*c)+32;
	
	printf("======================================\n");
	printf("fahranheit of celsius is : %f\n",f);
	
}
