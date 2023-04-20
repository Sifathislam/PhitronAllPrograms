// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <time.h>
// #include <string.h>

// int main(){
//     // This hand made function 
//     char a[100], b[100];
//     scanf("%s %s", a, b);

//     int k =strlen(a);
//     a[k] = 32;
//     for (int i = 0; i <= strlen(b); i++)
//     {
//         k++;
//         a[k] = b[i];
//     }
//     printf("%s\n" , a);


//     // This build-in function

//     strcat(a,b);
//     printf("%s", a);




//     return 0;
// }


#include<stdio.h>
int main()
{
    char str1[] = "hello";
    char str2[6];
    int i;
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    printf("%s", str2);
    return 0;
}