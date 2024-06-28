#include<stdio.h>
int main(){

    float a;
    printf("enter a number : ");
    scanf("%f",&a);
  

    if(a>0){
        printf("(%.2f)a is positive ",a);
    }
    else if(a==0){
        printf("(%.2f)a is natural",a);
    }
    else{
        printf("(%.2f)a is nagative",a);
    }
}