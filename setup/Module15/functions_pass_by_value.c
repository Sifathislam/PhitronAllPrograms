#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
    
void func(int x){
    x = 100;
    printf("%d\n", x);
}

 
int main(){


    int x ;
    x= 29;
    x = 134;
    func(x);
    printf("%d", x);

    return 0;
}