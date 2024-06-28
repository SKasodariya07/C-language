#include<stdio.h>

main(){
	
	int a = 10,b = 20,c;
	printf("value of a is :%d\n",a);
	printf("value of b is :%d\n\n",b);
	
	c = a;
	a = b;
	b = c;
	printf("after Swaping value \n\n");
	printf("value of a is :%d\n",a);
	printf("value of b is :%d\n",b);	
}
