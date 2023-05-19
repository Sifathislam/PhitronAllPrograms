#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n, m ;
    scanf("%d %d", &n, &m);

    int cnt[1000002]={0};
    // for (int i = 0; i <= m; i++)
    // {
    //     cnt[i] = 0;
    // }

    for (int i = 0; i < n; i++)
    {
    int numb;
       scanf("%d", numb);
       cnt[numb]++;
    }

    for (int i = 1; i <=m; i++)
    {
        printf("%d\n", cnt[i]);
    }
    
    
    

    return 0;
}