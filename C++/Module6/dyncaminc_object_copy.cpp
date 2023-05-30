#include<bits/stdc++.h>
using namespace std;

// create class 

class Person
{
    public:
    string Name;
    int age ;

    // create constructor 
    Person (string Name, int age){
        this->Name = Name;
        this->age = age;
    }
    void print (){
        cout << this->Name << " " << this->age;
    }

};

int main(){
    
    // create dynamic object 
    Person* rakib = new Person("Rakib hassan", 20);
    Person* sakib = new Person("Sakib ahmed", 30);
    
    // to copy dynamic object do this 
    *rakib = *sakib; /// this is the easy way
    delete sakib;
    rakib->print();

    // rakib->Name = sakib->Name; This way is hard 
    // rakib->age = sakib->age;




    return 0;
}