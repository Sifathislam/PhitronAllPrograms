#include<bits/stdc++.h>
using namespace std;

// create class 
class criketers 
{
    public:
    int jersey_no;
	string country;

};
int main(){
    // create two criketers id 
     criketers* dhoni = new criketers;
     dhoni->jersey_no = 18;
     dhoni->country = "India";
     cout<< dhoni->jersey_no<< " Dhoni"<< endl;

     criketers* kholi = new criketers;
     kholi->jersey_no = 10;
     kholi->country = "India";
     cout << kholi->jersey_no << " Kholi"<< endl;

    // change kholi to dhoni and delete kholi;
    *kholi = *dhoni;
    cout<< kholi->jersey_no<< " print form kholi"<<endl;
    cout<< dhoni->jersey_no<< " print form dhoni"<< endl;
    delete kholi;
    cout << kholi->jersey_no<< " pirnt form kholi after delete";

    return 0;
}