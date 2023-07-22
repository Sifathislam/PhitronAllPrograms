#include<bits/stdc++.h>
using namespace std;

// Insert Value 
void InsertHeap(vector <int> &v,int x){
        v.push_back(x);
        int cur_index = v.size() - 1; // index of current node || value 
        while (cur_index != 0)
        {
            int par_index =(cur_index - 1) / 2; // index of parent node of the  node || value
            if(v[cur_index] > v[par_index]){
                swap(v[cur_index], v[par_index]);
            }
            else 
                break;
            cur_index = par_index;
        }
}
// Crate the delete function
void deleteHeapMax(vector<int> &v){
    cout << v[0] << " ";
    // make first to last for delete
    swap(v[0], v[v.size()-1]);
    v.pop_back();
    int cur_indx = 0;
    while (true)
    {
        // Take indexs 
        int left_index = cur_indx * 2 + 1;
        int right_index = cur_indx * 2 + 2;
        int last_index = v.size() - 1;
        // Check conditions
        if(left_index <= last_index && right_index <= last_index){
            if(v[left_index] > v[right_index] && v[left_index] > v[cur_indx]){
                swap(v[left_index], v[cur_indx]);
                cur_indx = left_index;
            }
            else if (v[right_index] > v[left_index] && v[right_index] > v[cur_indx])
            {
                swap(v[right_index], v[cur_indx]);
                cur_indx = right_index;
            }
            else{
                break;
            }
            
        }
        else if (left_index <= last_index)
        {
            if(v[left_index] > v[cur_indx]){
                swap(v[left_index], v[cur_indx]);
                cur_indx = left_index;
            }
            else {
                break;
            }
        }
        else if (right_index <= last_index)
        {
            if(v[right_index] > v[cur_indx]){
                swap(v[right_index], v[cur_indx]);
                cur_indx = right_index;
            }
        }
        else{
            break;
        }

    }
    
}
int main(){
    // Take input 
     int n; cin >> n;
     vector<int> v;
     while (n--)
     {
        int x; cin >> x;
        InsertHeap(v, x);
     }
    // call delte function/
    int i  = v.size() - 1;
    while (i > -1)
    {
        deleteHeapMax(v);
        i--;
        
    }
    
    //  for(auto && i : v) cout << i << " ";

    return 0;
}