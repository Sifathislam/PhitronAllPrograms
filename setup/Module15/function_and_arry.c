#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
// How to recive arry for one functions to another functions
// This is the way with pointer
void Recive_Arry_Pointer(int * ar, int size_of_arry){
        for (int i = 0; i < size_of_arry; i++)
        {
            printf("Recevided Arry with Pointer - %d\n", *(ar + i));
        }       
}
// This is the normal way 
void Recive_Arry_Normal(int ar[], int size_of_arry){
        for (int i = 0; i < size_of_arry; i++)
        {
            printf("Recevided Arry Normal - %d\n", ar[i]);
        }       
}
int main(){
    int ar[5] = {10, 20, 30, 40, 50};
    Recive_Arry_Pointer(ar,5);
    printf("\n\n");
    Recive_Arry_Normal(ar,5);
    return 0;
}