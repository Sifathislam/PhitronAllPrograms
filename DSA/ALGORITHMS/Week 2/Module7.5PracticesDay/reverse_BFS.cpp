#include<bits/stdc++.h>
using namespace std;
// Create the Adjacency List 
const int N = 1e5+5; 
vector<int> graph_List[N];
bool visited[N];
stack<int> st; 

// Create The BFS function 
void BFS(int vertex){
    // create the queue 
    queue<int> q;
    q.push(vertex);
    visited[vertex] = true;

    while (!q.empty())
    {
        // remove and store 
        int temp_vertex = q.front();
        q.pop();

        // do the work 
        st.push(temp_vertex);

        // push the chlildrens
        for (auto &&edges : graph_List[temp_vertex])
        {
            if(visited[edges]) continue;
            q.push(edges);
            visited[edges] = true;
        }
        
    }
    
}


int main(){
    
    // Take input 
    int n ,e; cin >> n >> e;
    
    for (int i = 0; i < e; i++)
    {
        int ver_one, ver_two;
        cin >> ver_one >> ver_two;
        graph_List[ver_one].push_back(ver_two);
        graph_List[ver_two].push_back(ver_one);
    }

    // Run the BFS 
    BFS(1);

    // Print the reverse reslult 
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
     

    return 0;
}