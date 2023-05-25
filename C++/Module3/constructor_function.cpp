#include<bits/stdc++.h>
using namespace std;

// Make a class with consturctor 
class Student
{
    public:
    char Name[100];
    int Cls;
    char group;
    float GPA_last_sem;
    int roll;

    Student(char * nam, int cl,char grp, float gpa, int rol)
    {
        strcpy(Name, nam);
        Cls = cl;
        group = grp;
        GPA_last_sem = gpa;
        roll = rol;
    }
};




int main(){
    
     Student stdn_Data_One("Sifat Islam", 13,'N', 4.72, 20111);
     Student stdn_Data_Two("Siam Islam", 10,'N', 4.00, 21111);

     cout<<"Student One "<< endl <<"Name : "<<stdn_Data_One.Name<<endl<< "Class : "<<stdn_Data_One.Cls<<endl<<"Group : "<< stdn_Data_One.group<< endl << "GPA Of Last Sem : "<< stdn_Data_One.GPA_last_sem<<endl<<"Roll : "<< stdn_Data_One.roll;
     cout<< endl<<endl<<endl;
     cout<<"Student Two "<< endl <<"Name : "<<stdn_Data_Two.Name<<endl<< "Class : "<<stdn_Data_Two.Cls<<endl<<"Group : "<< stdn_Data_Two.group<< endl << "GPA Of Last Sem : "<< stdn_Data_Two.GPA_last_sem<<endl<<"Roll : "<< stdn_Data_Two.roll;

    return 0;
}