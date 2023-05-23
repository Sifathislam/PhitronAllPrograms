#include<bits/stdc++.h>
using namespace std;

int main(){

     char f1[100], s1[100], f2[100], s2[100];
     cin >>f1 >> s1 >>f2 >> s2;
     
    int flag = 1;

    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 0;
            break;
        }
    
    }

    (flag == 1)? cout<< "ARE Brothers":cout<< "NOT";
    



    return 0;
}