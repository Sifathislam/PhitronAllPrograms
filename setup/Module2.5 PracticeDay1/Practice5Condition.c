// Practice 5 Make logic with condition 

#include<stdio.h>

int main(){
    
    int a;
    scanf("%d", &a);

    if (a >= 10000)
    {
        printf("I'm buying a Gucci Bag");
        if (a > 20000)
        {
        printf(" And also buying Gucci Belt");
        }
    }
    else if (a >= 6000)
    {
        printf("I'm buying a Levis Beg");
    }
    
    else{
        printf("Buy something in 200");
    }
    

    return 0; 
}