#include<bits/stdc++.h>
using namespace std;
// Create the Heap 
class MyHeapMax{
    public:
    vector<int> v;

    // Up Heapify for the insert new value 
    void upHeapify(int indexOfPushedVal){
        while (0 < indexOfPushedVal && v[indexOfPushedVal] < v[(indexOfPushedVal - 1)/ 2])
        {
            swap(v[indexOfPushedVal], v[(indexOfPushedVal - 1) / 2]);
            indexOfPushedVal = (indexOfPushedVal - 1) / 2;
        }
        
    }
    // Down Heapify for delete the value 
    void downHeapify(int index){
        while (true)
        {
            int minest = index;
            int Left = (index * 2) + 1;
            int Right = (index * 2) + 2;

            if(Left < v.size() && v[index] > v[Left]){
                minest = Left;
            }

            if(Right < v.size() && v[minest] > v[Right]){
                minest = Right;
            }

            if(minest == index) break;

            swap(v[minest], v[index]);

            index = minest;

        }
        
    }

    void push(int val)
    {
        v.push_back(val);
        upHeapify(v.size() - 1);
    }

    void pop(int x){
        swap(v[x], v[v.size()-1]);
        v.pop_back();
        downHeapify(x);
    }

    int getMax(){
        return v.front();
    }

    void ArrayOtHeapMax(vector<int> arr){
        v = arr;
        int n = v.size();
        int lastLeaf = (n / 2) - 1;
        while (lastLeaf--)
        {
            downHeapify(lastLeaf);
        }
        

    }
    void printHeap(){
        for(auto && i : v){
            cout << i << " ";
        }
        cout << endl;
    }

};


int main(){
    // Make a heap 
     MyHeapMax v;
// Take input and print 
     int n; cin >> n;
     while (n--)
     {
        int x; cin >> x;
        v.push(x);
     }
    // v.printHeap();
      for (int i = 0; i < 5; i++)
    {
        cout << v.getMax()<< " ";
        v.pop(0);
    }

    // Take an array and make it heap 
    vector<int> arr = {3 , 2, 4, 5, 1};
    v.ArrayOtHeapMax(arr);
    // v.printHeap();




    
     
     

    return 0;
}