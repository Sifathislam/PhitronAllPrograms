#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main(){
     char name[16];
     printf("Enter your name:\n");
     fgets(name, 16, stdin);
     printf("The user name is %s ",name);
     
     return 0;
 }