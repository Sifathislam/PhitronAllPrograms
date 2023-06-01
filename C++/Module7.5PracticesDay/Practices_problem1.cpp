#include<bits/stdc++.h>
using namespace std;

// Create class for the student 

class Student
{
    public:
    string Name;
    int Roll;
    int Marks;
};

bool comp (Student a, Student b){

    if (a.Marks == b.Marks)
    {
        if(a.Roll < b.Roll){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(a.Marks > b.Marks) return true ;
        else return false;
    }
    
}

int main(){
    // Take input of object arry 
    int n;
    cin >> n;
    Student section_1[n];

    for (int i = 0; i < n; i++)
    {
        cin>> section_1[i].Name >> section_1[i].Roll >> section_1[i].Marks;
    }

    sort(section_1, section_1+n, comp);
    
    for (int i = 0; i < n; i++)
    {
        cout << section_1[i].Name << " "<< section_1[i].Roll << " " << section_1[i].Marks<< endl;
    }

    
     

    return 0;
}