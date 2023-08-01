// class Solution {
// public:
//     void SortArr(vector<int> &nums){
//         int cur_indx = 0;
//         while(true){
//             cout <<cur_indx << " ";
//             // cout<< endl;
//             int leftChild = (cur_indx * 2) + 1;
//             // cout <<leftChild << " ";
//             // cout<< endl;

//             int rightChild = (cur_indx * 2) + 2;
//             // cout <<rightChild << " ";
//             // cout<< endl;
            
//             int last_index = nums.size() - 1;
//             if(leftChild <= last_index && rightChild <= last_index){
//                 if(nums[leftChild] <= nums[rightChild] && nums[cur_indx] >= nums[leftChild])
//                 {
//                     swap(nums[cur_indx], nums[leftChild]);
//                     cur_indx = leftChild;
//                 }
//                 else if(nums[rightChild]<= nums[leftChild] && nums[cur_indx] >= nums[rightChild ] ){
//                     swap(nums[cur_indx], nums[rightChild]);
//                     cur_indx = rightChild;
//                 }
//             }
//             else if(leftChild <= last_index)
//             {
//                 if(nums[cur_indx] >= nums[leftChild])
//                 {
//                     swap(nums[cur_indx], nums[leftChild]);
//                     cur_indx = leftChild;
//                 }
//             }
//             else if(rightChild <= last_index)
//             {
//                 if(nums[cur_indx] >= nums[rightChild ] ){
//                     swap(nums[cur_indx], nums[rightChild]);
//                     cur_indx = rightChild;
//                 }
//             }
//             else{
//                 break;
//             }
//         }
//             return;
//     }


//        void SortArr2(vector<int> &nums){
//         int cur_indx = 0;
//         while(true){
//             cout <<cur_indx << " ";
//             // cout<< endl;
//             int leftChild = (cur_indx * 2) + 1;
//             // cout <<leftChild << " ";
//             // cout<< endl;

//             int rightChild = (cur_indx * 2) + 2;
//             // cout <<rightChild << " ";
//             // cout<< endl;
            
//             int last_index = nums.size() - 1;
//             if(leftChild <= last_index && rightChild <= last_index){
//                 if(nums[leftChild] <= nums[rightChild] && nums[cur_indx] >= nums[leftChild])
//                 {
//                     swap(nums[cur_indx], nums[leftChild]);
//                     cur_indx = leftChild;
//                 }
//                 else if(nums[rightChild]<= nums[leftChild] && nums[cur_indx] >= nums[rightChild ] ){
//                     swap(nums[cur_indx], nums[rightChild]);
//                     cur_indx = rightChild;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             else if(leftChild <= last_index)
//             {
//                 if(nums[cur_indx] >= nums[leftChild])
//                 {
//                     swap(nums[cur_indx], nums[leftChild]);
//                     cur_indx = leftChild;
//                 }
//                    else{
//                     break;
//                 }
//             }
//             else if(rightChild <= last_index)
//             {
//                 if(nums[cur_indx] >= nums[rightChild ] ){
//                     swap(nums[cur_indx], nums[rightChild]);
//                     cur_indx = rightChild;
//                 }
//                    else{
//                     break;
//                 }
//             }
//             else{
//                 break;
//             }
//         }
//             return;
//     }
//     vector<int> sortArray(vector<int>& nums) {
//         SortArr(nums);
//         SortArr2(nums);
//         return nums;
//     }
// };