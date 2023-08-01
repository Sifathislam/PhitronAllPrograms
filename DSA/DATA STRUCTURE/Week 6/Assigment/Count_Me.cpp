#include<bits/stdc++.h>
using namespace std;

int main(){
    // Create map for count 
    int qurey; cin >> qurey;
    cin.ignore();
    while (qurey--)
    {
        map<string,int>mp;
        map<string,int>mp2;
        string sentence; getline(cin, sentence);

        // Saparate words and count
        stringstream ss(sentence);
        string words;
        while (ss >> words)
        {
            mp[words]++;
        }
        
        // find the maixmum of the word 
        int countMax = 0;
        for(auto && s : mp){
            if(s.second > countMax){
                countMax = s.second;
            }
        }
    
        // if equal than frist coutmax will print 
        string lexci;
        stringstream ss2(sentence);
        while (ss2 >> words)
        {
            mp2[words]++;
            if(mp2[words] == countMax){
                lexci = words;
                break;
            }
        }
        
    cout << lexci <<" "<< countMax<< endl;
    }
    
     

    return 0;
}