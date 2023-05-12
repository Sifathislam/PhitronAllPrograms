#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take Input
    int n;
    scanf("%d", &n);
    int Tiger = 0, Pathan = 0;

    // Count the wins 
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        
        if (x1 > x2)
        {
            Tiger++;
        }
        else if (x1 < x2)
        {
            Pathan++;
        } 

    }
    
    // Find the Winner 
    if (Tiger > Pathan)
    {
        printf("Tiger");
    }
    else if (Pathan > Tiger)
    {
        printf("Pathan");
    }
    else{
        printf("Draw");
    }
    
    

    return 0;
}