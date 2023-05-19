#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void name(){
    printf("Sifath\n");
}

void world(){
    printf("The world starts and prints the \nworld \nAnd than ends the function\n");
}

void hello(){
    printf("The hello function start\n");
    world();
    name();
    printf("The hello functions ends\n");
}


int main(){

    printf("The function start here\n");
    hello();
    printf("The function end\n");
    

    return 0;
}