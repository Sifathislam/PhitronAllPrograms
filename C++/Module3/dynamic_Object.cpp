#include<bits/stdc++.h>
using namespace std;

// Create class 

class Student{
    public:
    char Name[100];
    int Roll;
    int Clas;
    char Group;

    Student(char* nam, int rol, int cls, char grp){
        strcpy(Name, nam);
        Roll = rol;
        Clas = cls;
        Group = grp;
    }
};


int main(){
    
    // Create a dynamic Object ;
    char name[100] = "Sifat islam"; 
    // If there is constractor than this syntax 
    Student* Sifat = new Student(name, 30, 15, 'A');
    // Or there in no constructor than this syntaxt
    // Student* Sifat = new Student;
    //     char nam[20] = "Sifat islam";
    //     strcpy(*Sifat.Name, nam);
    //     int Sifat.Roll = 23;
    //     int Sifat.Clas = 3;
    //     char Sifat.Group = 'A';

    // Way to Accsess the  dynamic isobject
    cout<< (*Sifat).Name<<endl;
    cout<< (*Sifat).Clas<<endl;      // Normal way 
    cout<< (*Sifat).Roll<<endl;
    cout<< (*Sifat).Group<<endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout<< Sifat->Name<<endl;
    cout<< Sifat->Clas<<endl;
    cout<< Sifat->Roll<<endl;      // Short cut way;
    cout<< Sifat->Group<<endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    // Delete the object this way 
    delete Sifat;

    
    cout<< Sifat->Name<<endl;
    cout<< Sifat->Clas<<endl;
    cout<< Sifat->Roll<<endl;      // Short cut way;
    cout<< Sifat->Group<<endl;


     

    return 0;
}