#include <iostream>
using namespace std;

int main(){

    int a;
    cin >> a;

    switch (a){
        
        case 1: 
            cout << "One";
            break;
        case 2: 
            cout << "Two";
            break;
        case 3: 
            cout<<"Three";
            break;
        case 4: 
            cout<<"Four";
            break;
        case 5: 
            cout<<"Five";
            break;
        case 6: 
            cout<<"Six";
            break;
        default: 
            cout<<"Not match the number";

    }



    return 0;
}