// leet code problem: https://leetcode.com/problems/sort-an-array/
// class Solution {
// public:
//     void merge(int l,int r,int mid,vector<int> &v){
//         int left_size = mid - l + 1;
//         vector<int> leftV(left_size + 1);
//         int right_size = r - mid;
//         vector<int> rightV(right_size + 1);

//         for(int i = l,j = 0; i <= mid; i++ , j++){
//             leftV[j] = v[i];
//         }
//         for(int i = mid + 1,j = 0; i <= r; i++ , j++){
//             rightV[j] = v[i];
//         }

//         leftV[left_size] = INT_MAX;
//         rightV[right_size] = INT_MAX;
//         int lp = 0, rp = 0;
//         for(int i = l; i <= r; i++){
//             if(leftV[lp] <= rightV[rp]){
//                 v[i] = leftV[lp];
//                 lp++;
//             }
//             else{
//                 v[i] = rightV[rp];
//                 rp++;
//             }
//         }

//     }
//     void mergeSort(int l , int r, vector<int> &v){
//         // base case 
//         if(l == r) return;
//         int mid = (l + r) / 2;
//         mergeSort(l,mid,v);
//         mergeSort(mid + 1, r, v);
//         merge(l, r,mid,v);
//     }
//     vector<int> sortArray(vector<int>& nums) {
//         mergeSort(0 , nums.size()-1, nums);
//         return nums;
//     }
// };