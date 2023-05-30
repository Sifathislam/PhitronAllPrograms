#include<bits/stdc++.h>
using namespace std;

// create class 

class Student 
{
    public:
    string name;
	int roll;
	char section;
	int math_marks;
	int cls;
    
    // create constructor 
    Student (string name, int roll, char section, int math_marks,int cls){
    
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};


int main(){

     Student stdnt_1("Sifath islam", 19, 'C', 90, 11);
     Student stdnt_2("Siam islam", 30, 'C', 70, 11);
     Student stdnt_3("Shaik islam", 21, 'C', 60, 11);
    
    if (stdnt_1.math_marks> stdnt_2.math_marks && stdnt_1.math_marks > stdnt_3.math_marks)
    {
        cout<< stdnt_1.name;
    }
    else if (stdnt_2.math_marks > stdnt_1.math_marks && stdnt_2.math_marks > stdnt_3.math_marks )
    {
        cout<< stdnt_2.name;
    }
    else{
        cout <<stdnt_3.name;
    }
    
    
    return 0;
}