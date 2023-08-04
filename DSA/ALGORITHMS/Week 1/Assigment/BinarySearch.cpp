#include<bits/stdc++.h>
using namespace std;

int main(){
    // Take input 
     int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Take the finding number 
    int k; cin >> k;

    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(arr[mid] == k){
            cout << mid << endl;
            return 0;
        }

        if(arr[mid] > k) r = mid - 1;

        else if (arr[mid] < k) l = mid + 1;
    }
    cout << "Not Found" << endl;
    

    return 0;
}