#include<bits/stdc++.h>
using namespace std;

int main(){
    //  Create Stack 
    stack <char> st;
    string s; cin >> s;
    for(auto && c : s){
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        }
        else{
            if(st.empty()) cout << "NO Not Valid" <<endl;
            if (c == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (c == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if (c == ']' && st.top() == '[')
            {
                st.pop();
            }
            else{
                break;
            }
        }
    }

    if(st.empty()) cout << "YES Valid" << endl;
    else cout << "NO Not Valid"<< endl;

    return 0;
}