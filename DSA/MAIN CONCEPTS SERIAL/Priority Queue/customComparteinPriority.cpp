#include<bits/stdc++.h>
using namespace std;
// Make a is_object for the the testing the custome sort 
class Student{
    public:
    string student;
    int marks;
    int roll;

    Student(string student, int roll, int marks){
        this->student = student;
        this->marks = marks;
        this->roll = roll;
    }
};
class cmp{
    public:

    bool operator()(Student a, Student b)
    {
        if(a.marks > b.marks) return true;
        else if(a.marks == b.marks){
            if (a.roll > b.roll) return true;
            else return false;
        }
        else return false;
    }
};
int main(){

    //  Create the priority_queue
    priority_queue<Student,vector<Student>,cmp> pq;

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int mk;
        int rol;
        cin >> s >> rol >> mk; 
        Student obj(s,rol,mk);
        pq.push(obj);
    }

    // Print the result 
    while (!pq.empty())
    {
        cout << pq.top().student << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    } 
    
    

    return 0;
}