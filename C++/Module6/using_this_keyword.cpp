#include<bits/stdc++.h>
using namespace std;

// create class and use the this keyword 

class Person
{
    public:
    string Name;
    int age;

    // create contructor 
    Person (string Name , int age)
    {
        this->Name = Name;
        this->age = age;
    }
    void print(){
        cout<< this->Name << " " << this->age;
    }

};



int main(){
    
    // create object 
     Person Sifat("Sifath Islam", 35);
     Sifat.print();

    return 0;
}