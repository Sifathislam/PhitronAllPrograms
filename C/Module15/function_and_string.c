#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
// How to get sting on functions by argurment
// pointr way 
void stirn_func(char * name){

    printf("%d\n", strlen(name));
}
// normal way 
void stirn_func_normal(char name[]){

    printf("%d\n", strlen(name));
}


int main(){

    char name[20] ="sifath";
    stirn_func(name);
    stirn_func_normal(name);

    return 0;
}