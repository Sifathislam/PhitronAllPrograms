// codininja: https://www.codingninjas.com/studio/problems/merge-sort_920442?leftPanelTab=0
// void MergeTheArr(int l,int r,int mid,vector<int>&v){
//     int left_size = mid - l + 1;
//     int right_size = r - mid;
     
//     vector<int> leftV(left_size + 1);
//     vector<int> rightV(right_size + 1);

//     for(int i = l, j=0; i <= mid; i++, j++) leftV[j] = v[i];
//     for(int i = mid + 1, j = 0; i <= r; i++, j++) rightV[j] = v[i];

//     leftV[left_size] = 1e9 + 7;
//     rightV[right_size] = 1e9 + 7;

//     int lp = 0,rp = 0;
//     for(int i = l; i <= r; i++){
//         if(leftV[lp] <= rightV[rp]){
//             v[i] = leftV[lp];
//             lp++;
//         }
//         else{
//             v[i] = rightV[rp];
//             rp++;
//         }

//     }

// }
// void Divide(int l, int r, vector<int> &v){
//     if(l == r) return;

//     int mid = (l + r) / 2;
//     Divide(l, mid, v);
//     Divide(mid+1, r, v);
//     MergeTheArr(l, r, mid,v);
// }

// void mergeSort(vector < int > & arr, int n) {
//     Divide(0,arr.size()-1,arr);
// }