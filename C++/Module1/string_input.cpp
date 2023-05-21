#include <iostream>
using namespace std;

int main (){
    // Take string input in c++
    char string[100];

    // cin >> string; // Take input until find the space
    cin.getline(string, 100); // Take input until find the enter

    // cout << string << endl;
    cout << string;



    return 0;
}