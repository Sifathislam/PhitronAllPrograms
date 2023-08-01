#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input n
     int n; cin >> n;

    //  Take arry input 
    vector <int> arry(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }
    // Sort the arry because of find the next value is same or not 
    sort(arry.begin(),arry.end());
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if(arry[i] == arry[i - 1]){

            flag = true ;
            break;
        }
    }

    if (flag == true) cout << "YES";
    else cout << "NO";
    




// Try this problem to solve with birnay seaerch but test worng so skip it 
    // Sort the arry 
    // sort(arry, arry+n);
//     int flag = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x = arry[i];

//         int L = 0, R = n - 1;

//         while (L <=R)
//         {
//             int mid_Index = (L+R)/2;

//             if (arry[mid_Index] == x)
//             {
//                 flag++;
//             }
//             if(x >= arry[mid_Index]) L = mid_Index + 1;
//             else R = mid_Index - 1;

//         }
//             if(flag >= 2){
//                 break;
//             }
//             else{
//                 flag = 0;
//             }
//     }

// // Print the dulclincate Y Or N
//         if (flag >= 2)
//         {
//             cout << "YES";
//         }
//         else{
//             cout<< "NO";
//         }
    
    
    return 0;
}