#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


// Take arguments  and return value 

// int sum(int a, int b);
// int main(){


//     int a, b;
//     scanf("%d %d", &a, &b);
//     int calculate = sum(a, b); 

//     printf("%d", calculate);
    

//     return 0;
// }

// int sum(int a, int b){
//      return a + b;
//         };


//  Takes Arguments with return value

// void makestar(int n){
//     for (int i = 0; i < n; i++)
//     {
//     printf("%c - %d\n", '*', i);
//     }
    
// }

// int main(){

//     int n;
//     scanf("%d", &n);

//     makestar(n);

//     return 0;
// }


// // Give return without argument

// int giveReturn(){

//     int i ;
//     scanf("%d", &i);

//     return i;
// }


// int main(){



// printf("%d", giveReturn());
//     return 0;
// }


// WithOut Argument and WithOut return valule 

void nothing(); //Declare


int main(){  // Print
    nothing();
    return 0;
}

void nothing(){ // Defination 
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}