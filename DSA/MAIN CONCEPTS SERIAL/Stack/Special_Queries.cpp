// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     // create the stl queue 
//     queue <string> Que;
//     // Take the n input 
//     int n; cin >> n;

//     while (n--)
//     {
//         int x; cin >> x;

//         if (x == 0)
//         {
//             string s; cin >> s;
//             Que.push(s);
//         }
//         else if (x == 1 && !Que.empty())
//         {
//             cout << Que.front() << endl;
//             Que.pop();
//         }
//         else{
//             cout <<"Invalid"<< endl;
//         }   

//     }
    

     

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> qq;
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;

        if(num==0)
        {
            string name;
            cin>>name;
            qq.push(name);
        }

        if(!qq.empty())
        {
           if(num==1){
                cout<<qq.front()<<endl;
                qq.pop();
                
                   } 
           }
           else if(qq.empty()&& num==1)
           {
            cout<<"Invalid"<<endl;
           }
    }
   
    return 0;
}