#include<bits/stdc++.h>
using namespace std;

int main(){
    // Create map for count 
    int qurey; cin >> qurey;

    while (qurey--)
    {
        map<int,int>mp;
        int n; cin >> n;
        while (n--)
        {
            int val; cin >> val;
            mp[val]++;
        }
        
    // find the count         
        int largest;
        int countMax = 0;
        for(auto && s : mp){
            if(s.second > countMax){
                countMax = s.second;
                largest = s.first;
            }
        }
        // find the largest 
        for(auto && s : mp){
            if(s.second == countMax &&s.first > largest){
                largest = s.first;
            }
        }
    cout << largest <<" "<< countMax<< endl;
    }
    
     

    return 0;
}