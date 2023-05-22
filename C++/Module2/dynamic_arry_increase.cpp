#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Make a dynamic arry 
    int * arry1 = new int[5];
    
    for (int i = 0; i < 5; i++)
    {
        cin >> arry1[i];
    }
    
    // copy the arry and increase the size of the arrry .

    int * arry2 = new int[10];

    for (int i = 0; i < 5; i++)
    {
        arry2[i] = arry1[i];
    }
    arry2[5] = 60;
    arry2[6] = 70;
    arry2[7] = 80;
    arry2[8] = 90;
    arry2[9] = 100;
    for (int i = 0; i <10; i++)
    {
        cout << arry2[i]<< " ";
    }
    
    cout <<endl;
    // Now We have to delete the old arry or arry1 becase of if we don't delete it. it will take extra space on memore for it 
     
     delete[] arry1; // arry delete syntax

    for (int i = 0; i < 5; i++)
    {
        cout<< arry1[i]<< " ";
    }
    


    





    return 0;
}