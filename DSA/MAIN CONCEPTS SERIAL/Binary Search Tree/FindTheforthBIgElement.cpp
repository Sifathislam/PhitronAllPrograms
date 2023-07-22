// #include<bits/stdc++.h>
// using namespace std;

// void makeTheHeap(int arr[],int n){
//     int i = 0;
//     int sizeOfarr = n - 1;
//     while(i != n){
//         int heapLeft = (i * 2) + 1;
//         int heapRight = (i * 2) + 2;

//         if(sizeOfarr >= heapLeft && sizeOfarr >= heapRight){
//             if(arr[i] < arr[heapLeft]){
//                 swap(arr[i], arr[heapLeft]);
//             }
//             if(arr[i] < arr[heapRight]){
//                 swap(arr[i], arr[heapRight]);
//             }
//         }
//         else if(sizeOfarr >= heapLeft){
//              if(arr[i] < arr[heapLeft]){
//                 swap(arr[i], arr[heapLeft]);
//             }
//         }
//         else if(sizeOfarr >= heapRight){
//             if(arr[i] < arr[heapRight]){
//                 swap(arr[i], arr[heapRight]);
//             }
//         }
//         i++;
//     }
// }

// int findlargest(int arr[], int n){
//         int i = 0;
//         swap(arr[0], arr[n-1]);
//         arr[n - 1] = 0;
//     while(true){
//         int left = i * 2 + 1;
//         int right = i* 2 + 2;
//         if(left <= n && right <= n){
//             if(arr[left] > arr[right] && arr[left] > arr[i]){
//                 swap(arr[i], arr[left]);
//             }
//             else if(arr[right] > arr[left] && arr[right] > arr[i]){
//                 swap(arr[i], arr[right]);
//             }
//         }
//         else if(left <= n){
//              if(arr[left] > arr[right] && arr[left] > arr[i]){
//                 swap(arr[i], arr[left]);
//             }
//         }
//         else if(right <= n){
//             if(arr[right] > arr[left] && arr[right] > arr[i]){
//                 swap(arr[i], arr[right]);
//             }
//         }
//         else{
//             break;
//         }
    
//       }
//         return arr[0];
//     }

// int getFourthLargest(int arr[], int n)
// {
//     makeTheHeap(arr, n);
//     int forhtlargest;
//     if(n > 4){
//         int i = 3;
//         while(i--){
//         forhtlargest = findlargest(arr, n); 
//         }
//     }else{
//         int notr = INT_MIN;
//         return notr;
//     }
//     return forhtlargest;  
  
  
// }
#include<bits/stdc++.h>
using namespace std;

int main(){

     

    return 0;
}