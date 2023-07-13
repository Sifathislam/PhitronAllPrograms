#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,i = 1; cin >> n;
    while (n--)
    {
        cout << "Case "<<i<<":" << endl;
        //  Create stacks 
        stack <string> backWard;
        stack <string> forWard;
        while (true)
        {        

            string command; cin >> command;

            if (command == "VISIT")
            {
                string link; cin >> link;
                backWard.push(link);
                cout << backWard.top() << endl;
            }
            else if(command == "BACK"){
                if(backWard.size() >= 2){
                forWard.push(backWard.top());
                backWard.pop();
                cout << backWard.top() <<endl;
                }
                else if (backWard.size() == 1)
                {
                    forWard.push(backWard.top());
                    backWard.pop();
                    string defult = "http://www.lightoj.com/";
                    cout << defult << endl;
                }
                else{
                    cout << "Ignored"<< endl;
                }
            }
            else if (command == "FORWARD")
            {
                if (forWard.size() >= 1)
                {
                    backWard.push(forWard.top());
                    cout << forWard.top() << endl;
                    forWard.pop(); 
                }
                else{
                    cout << "Ignored" << endl;
                }
                
            }
            else if (command == "QUIT")
            {
                break;
            }
        }
            i++;
    }

    return 0;
}