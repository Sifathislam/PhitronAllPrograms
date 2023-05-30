#include<bits/stdc++.h>
using namespace std;

// Create Name space 
namespace sifat_var 
{
    string full_name_owner = "Sifat Islam";

    int age = 20;

    void hello (){
        cout<< "Hello everyone Sifath";
    }
}
namespace shaik_var 
{
    string full_name_owner1 = "Shaik Islam";

    int age1 = 24;

    void hello1 (){
        cout<< "Hello everyone Shaik ";
    }
}

// one way to access the namespace  this is 
using namespace sifat_var;
using namespace shaik_var; // secend way without this using


int main(){

    // first way using namespace ;
    cout << full_name_owner<< endl;
    cout << full_name_owner1<< endl;

    // second way to print the value of namespace
    cout << shaik_var::full_name_owner1<<endl;

     

    return 0;
}