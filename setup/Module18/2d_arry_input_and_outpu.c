// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <time.h>
// #include <string.h>

// int main(){
//     // 2D Array declare 
//     int arry[5][3];

//     for (int ir = 0; ir < 5; ir++)
//     {
//         for (int ic = 0; ic < 3; ic++)
//         {
//             scanf("%d", &arry[ir][ic]);
//         }
//     }

//     for (int ir = 0; ir < 5; ir++)
//     {
//         for (int ic = 0; ic < 3; ic++)
//         {
//             printf("%d ", arry[ir][ic]);
//         }
//         printf("\n");
//     }
    
    

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input size of the 2DArry 
    int n, m;
    scanf("%d %d", &n , &m);
    // Declare the 2D Arry 
    int arry[n][m];
    // Take input of the arry  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arry[i][j]);
        }
    }
    // Print the arry 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arry[i][j]);
        }
        printf("\n");
    }
    
    


     



    return 0;
}