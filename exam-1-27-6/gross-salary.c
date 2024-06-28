// gross salary
#include<stdio.h>

int main() {
    float s, g;
    
    printf("Enter a salary: \n");
    scanf("%f", &s);  // Use %f for float input
    
    // Calculate gross salary
    g = s + (s * 0.10) + (s * 0.05) + (s * 0.08);  // Add 10%, 5%, and 8% to the salary
    
    printf("Gross salary is: %.2f\n", g);
    
    return 0;
}

