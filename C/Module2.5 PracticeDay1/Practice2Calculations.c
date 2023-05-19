// Do Calculation with inputed numbers 
#include <stdio.h>

int main(){
    int a, c;
    double b;

    scanf("%d %lf",&a, &b);
    
    c = b;
    // This one type to solve the sum of two inputed number 

    printf("%d + %0.0lf = %0.0lf\n",a, b, a + b);

    // This is the secend type 
    
    printf("%d + %d = %d\n" , a, c, a + c);

// ________________________________________________//
    // This how you can subtraction two inputs 
    printf("%d - %d = %d\n", a, c, a - c);

// ________________________________________________//
    // This how you can multiplication two inputs 
    printf("%d * %d = %d\n", a, c, a * c);

// ________________________________________________//
    // This how you can division two input 
    printf("%d / %0.lf = %0.2lf\n", a, b, a / b);


    return 0;
}