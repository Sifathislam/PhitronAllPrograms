#include<bits/stdc++.h>
using namespace std;

int main(){
// Take input of the string 
     string s; cin >> s;
    
    if(s == ""){
        cout << "No";
        return 0;
    }
     

    // Check the valid or not 
    bool flag;
    stack <char> st;
    for(char c : s){
        if(c == '('|| c == '{' || c == '['){
            st.push(c);
        }
        else{
            if(st.empty()){
                flag = false;
                break;
            }
            else{
                if (c == ')' && st.top() == '(' ){
                    st.pop();
                }
                else if (c == '}' && st.top() == '{' ){
                    st.pop();
                }
                else if (c == ']' && st.top() == '[' ){
                    st.pop();
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
    }
    if(st.empty()){
        flag = true;
    }
    else{
        flag = false;
    }


    if(flag == true){
        cout << "Yes" << endl;
    }  
    else{
        cout << "No" << endl;
    }
    return 0;
}
