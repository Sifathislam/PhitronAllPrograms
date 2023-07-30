// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,b;
//     cin>>n;
//     vector<int>a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     cin>>b;
//     priority_queue<int,vector<int>,greater<int>>min_pq;
//     for (int i = 0; i < n; i++)
//     {
//         min_pq.push(a[i]);
//     }
    
//     while (b--)
//     {
//         int c;
//         cin>>c;
//         if(c==0)
//         {
//             int x;
//             cin>>x;
//             a.push_back(x);
//             min_pq.push(x);
//             cout<<min_pq.top()<<endl;
//         }
//         else if(c==1)
//         {
//             if(!min_pq.empty())cout<<min_pq.top()<<endl;
//             else cout<<"Empty"<<endl;
//         }
        
//         else if(c==2)
//         {
//             if(!min_pq.empty())
//             {
//                 int min_val=min_pq.top();
//                 min_pq.pop();
//                 a.erase(remove(a.begin(),a.end(),min_val),a.end());
//             }
//             if(!min_pq.empty()) cout<<min_pq.top()<<endl;
//             else cout<<"Empty"<<endl;
//         }
        
//     }
    

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){

     string s; getline(cin , s);

    return 0;
}