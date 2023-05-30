#include<bits/stdc++.h>
using namespace std;

// Create class and create function on the class 
class Person
{
    public:
    string Name;
    int age;
    float height;
    string Hair_Color;

    // Create constructor 
    Person(string nam, int ag, float heigt, string haircolor){
        Name = nam;
        age = ag;
        height = heigt;
        Hair_Color = haircolor;
    }
    
    // Create function on the class
    void print (){
        cout << "Name :" << Name<< endl;
        cout << "Age :" << age<< endl;
        cout << "Height :" << height<< endl;
        cout << "Hair Color :" << Hair_Color<< endl;
    }
    void Three_endll(){
        cout<< endl;
        cout<< endl;
        cout<< endl;
    }

};


int main(){
    
    // Create object 
    Person Sifat("Sifat Islam", 19, 5.10,"Black");
    Person Shaik("Shaik Islam", 21, 5.7,"Black");
    Person Siam("Siam Islam", 19, 5.9,"Black");
    Sifat.print();// Call the function form class
    Sifat.Three_endll();
    Shaik.print();// Call the function form class
    Shaik.Three_endll();
    Siam.print();// Call the function form class
     

    return 0;
}