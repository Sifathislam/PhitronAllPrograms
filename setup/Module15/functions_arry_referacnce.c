#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void func(int * arr, int size){
 for (int i = 0; i < size; i++)
 {
    if (arr[i] % 2 == 0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
 }
}


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    func(arr, n);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    


    

    return 0;
}