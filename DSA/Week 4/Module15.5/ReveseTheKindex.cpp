// // Coding nijja problem 
// #include <bits/stdc++.h> 
// queue<int> reverseElements(queue<int> q, int k)
// {
//     stack <int> st;
//     queue <int> tmpQ;
//     while(k--){
//         st.push(q.front());
//         q.pop();
//     }
//     while(!q.empty()){
//         tmpQ.push(q.front());
//         q.pop();
//     }
//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }
//     while(!tmpQ.empty()){
//         q.push(tmpQ.front());
//         tmpQ.pop();
//     }
//     return q;
// }
