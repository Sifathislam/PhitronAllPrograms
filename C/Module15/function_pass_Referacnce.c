#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void func(int * p){
    
    printf("value of p - %d\n", *p);
    *p = 101;

}

int main(){

    int x = 100;
    func(&x);
    printf("Adress of x - %p\n", &x);
    printf("Value changed by pointer p on func - %d", x);

    return 0;
}