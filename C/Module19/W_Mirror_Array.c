// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <time.h>
// #include <string.h>

// int main(){
//     // Take input 
//     int n, m;
//     scanf("%d %d", &n, &m);
    
//     int arry[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arry[i][j]);
//         }
//     }

//     // Print The result     
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = m - 1; j >= 0; j--)
//         {
//            printf("%d ", arry[i][j]);
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




int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}
int main(){
int n;
scanf("%d", &n);

int i = count(n);
printf("%d", i);
    

    return 0;
}