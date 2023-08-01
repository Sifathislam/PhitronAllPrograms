#include<bits/stdc++.h>
using namespace std;

int main(){

    //  Create List 
    list <int> myList;

    // Take input 
    int val; cin >> val;
    while (val != -1)
    {
      myList.push_back(val);
      cin >> val;   
    }
    
    // Sort the list 
    myList.sort();

    // remove the duplicates 
    myList.unique();
    
    // Print the list 
    for(int val: myList)
    {
        cout << val << " ";
    }    

    return 0;
}