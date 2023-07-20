#include<bits/stdc++.h>
using namespace std;
// reverse the stack 
void reverse_Stack(stack<int> &st,stack<int> &reverseNeed){
    // Baser case /
    if(st.empty()) return;
    int val = st.top();
    st.pop();
    reverse_Stack(st,reverseNeed);
       while (!st.empty())
    {
        reverseNeed.push(st.top());
        st.pop();
    }
    reverseNeed.push(val);
    while (!reverseNeed.empty())
    {
        st.push(reverseNeed.top());
        reverseNeed.pop();
    }
    
}
int main(){

     stack<int> st;
     stack<int> reverse_need;
    
    int n; cin >>n;
     while (n--)
     {
        int val; cin >> val;
        st.push(val);
     }
    
    reverse_Stack(st,reverse_need);
     while (!st.empty())
     {
        cout << st.top() << " ";
        st.pop();
     }
     
     

    return 0;
}