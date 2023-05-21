#include <iostream>
using namespace std;

int main (){

    int a;

    cin >> a;

    switch(a % 2){
        
        case 0: cout << "THIS IS EVEN";
        break;

        default: cout << "THIS IS ODD";
    }
        

    return 0;
}