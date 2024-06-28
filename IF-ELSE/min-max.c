#include<stdio.h>
int main(){

    float a,b;
    printf("enter a number : ");
    scanf("%f",&a);
    printf("enter a number : ");
    scanf("%f",&b);

    if(a>b){
        printf("%.2fa is grater than %.2fb",a,b);
    }
    else if(a==b){
        printf("%.2fa is equel %.2fb",a,b);
    }
    else{
        printf("%.2fb is grater than %.2fa",b,a);
    }
}