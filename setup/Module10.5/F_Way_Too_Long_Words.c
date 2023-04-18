#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
   // Takes input   T times
    int t;
    scanf("%d", &t);
    char string[101];
    
    //  Input string and work
    for (int i = 1; i <= t; i++)
    {
        scanf("%s", string);
        
        int string_Lenght = strlen(string);

        if (string_Lenght <= 10)
        {
            printf("%s\n", string);
        }

        else   // print the result if it's true
        {
            printf("%c" ,string[0]);                        // because of this line is we print 0 and the last index of stirng of we have to remove that we print the length
            printf("%d", string_Lenght - 2);
            printf("%c", string[string_Lenght -1 ]);
            printf("\n");
        }
        
    }

    return 0;
}