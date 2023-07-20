#include<bits/stdc++.h>
using namespace std;

int main(){
    // Create map for count 
    int qurey; cin >> qurey;
    cin.ignore();
    while (qurey--)
    {
        map<string,int>mp;
        string sentence; getline(cin, sentence);

        // Saparate words and count
        stringstream ss(sentence);
        string words;
        while (ss >> words)
        {
            mp[words] ++;
        }
        
        string lexci;
        int countMax = 0;
        for(auto && s : mp){
            if(s.second > countMax || (s.second == countMax && s.first < lexci)){
                countMax = s.second;
                lexci = s.first;
            }
        }
    cout << lexci <<endl;
    }
    
     

    return 0;
}