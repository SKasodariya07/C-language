#include<stdio.h>
 int main(){

    float a,b,c,m;
    printf("enter a first mark : ");
    scanf("%f",&a);
    printf("enter a second mark : ");
    scanf("%f",&b);
    printf("enter a third mark : ");
    scanf("%f",&b);

    m=(a+b+c)/(3);
    printf("=========================\n");

    printf("average mark is : %.2f",m);
}