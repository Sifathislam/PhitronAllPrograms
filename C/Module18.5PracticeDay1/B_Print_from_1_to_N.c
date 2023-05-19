#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// Create recursion function Let do it in two way
void print_1_to_5(int n, int i){  // 1st way
    if (i == n + 1) return;
    printf("%d\n", i);
    print_1_to_5(n, i + 1);
}
// void print_1_to_5(int n){  // nd way
//     if (n == 0) return;
//     print_1_to_5(n - 1);
//     printf("%d\n", n);
// }


int main(){

    // Take input 
    int n;
    scanf("%d", &n);
    // Call recursion
    print_1_to_5(n, 1); // Frist way to do it 
    // print_1_to_5(n); // Second way to do it 
    return 0;
}