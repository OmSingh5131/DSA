

#include<bits/stdc++.h>
using namespace std;


void bfs(unordered_map<int,list<int>> adjList, unordered_map<int, bool > visited, vector<int> ans, int node ){

    queue<int> q; // defined a queue 
    q.push(node); // Initialised the queue with a source Node
    visited[node] = 1; // Mark this node as true, as you have visited it and you gotta print this node
    
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        //store frontNode into ans
        ans.push_back(frontNode);

        // traverse all neighbours of frontNode
        for( auto i : adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}


// https://www.naukri.com/code360/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// Breadth First Search : All the nodes are visited one by one.



#include<bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){

    // Write your code here.

    // My Attempt
    
    vector<int> ans;

    unordered_map<int, bool> m; // This makes a map m, which maps the Nodes to the boolean which says if they were visited or not

    for ( int i = 0; i < n; i++){
        m[i] = false;
    }

    queue<int> q;
    q.push(0);

    while(!q.empty()){
        int target = q.front();
        q.pop();
        if(m[target] == false){
            ans.push_back(target);
            for( int i = 0; i < adj[target].size(); i++){
                q.push(adj[target][i]);
            }    
        }
        m[target] = true;
    }
    return ans;    
}



