// https://www.naukri.com/code360/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// Cycle detection in the graphs

// BFS


#include<unordered_map>
#include<queue>
#include<list>
using namespace std;

//TC : O(n)


bool isCyclicBFS( int src, unordered_map< int, bool > &visited,  unordered_map<int, list<int>> &adj){
    //TC : O(n)


    unordered_map<int,int> parent;

    parent[src] = -1; // Initially we took the parent as - 1 of the source node
    visited[src] = 1;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for( auto neighbour : adj[front]){
            if( visited[neighbour] == true && neighbour != parent[front] ){
                return true;
            }
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = front;
            }   
        }
    }

    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // creating the adjacency list
    unordered_map<int, list<int>> adj;
    for( int i = 0; i < m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // make the visited array
    unordered_map< int, bool > visited;


    // to handle the disconnected components, we apply this for loop
    for( int i = 1; i <= n; i++){
        if(!visited[i]){
            bool ans = isCyclicBFS(i, visited, adj);
            if( ans == 1){
                return "Yes";
            }
        }
    }

    return "No";

}


// Cycle detection on Graphs BFS


#include<unordered_map>
#include<queue>
#include<list>
using namespace std;

//TC : O(n)


bool isCyclicDFS( int node, int parent, unordered_map< int, bool > &visited,  unordered_map<int, list<int>> &adj){


    visited[node] = true;

    for( auto neighbor : adj[node]){
        if( !visited[neighbor]){
            bool cycleDetected = isCyclicDFS(neighbor, node, visited, adj);
            if(cycleDetected){
                return true;
            }
        }

        else if( neighbor != parent){
            //cycle present
            return true;
        }
        
    }

}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // creating the adjacency list
    unordered_map<int, list<int>> adj;
    for( int i = 0; i < m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // make the visited array
    unordered_map< int, bool > visited;


    // to handle the disconnected components, we apply this for loop
    for( int i = 1; i <= n; i++){
        if(!visited[i]){
            bool ans = isCyclicDFS(i, -1, visited, adj);
            if( ans == 1){
                return "Yes";
            }
        }
    }

    return "No";

}