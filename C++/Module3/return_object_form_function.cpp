#include<bits/stdc++.h>
using namespace std;

// CREATE CLASS 
class Student {
    public:
    char name[100];
    int roll;
    char grp;
    int clas;
// CREATE CUNSTRUCTOR 
    Student (char * nome, int rol, char gr, int cl)
    {
        strcpy(name, nome);
        roll = rol;
        grp = gr;
        clas = cl;
    }

};

// CREATE FUNC TO RETURN OBJECT TO THE MAIN 
Student func(){
    
    char nam[100] = "Sifat islam";
    
    Student stdn_one(nam,29,'A',8);
    
    return stdn_one;

}



int main(){

    //  RECIVED THE OBJECT ;
    Student sudent_one = func();

    cout << "Name :" << sudent_one.name<< endl;
    cout << "Roll :" << sudent_one.roll<< endl;
    cout << "Class :" << sudent_one.clas<< endl;
    cout << "Group:" << sudent_one.grp<< endl;

    return 0;
}