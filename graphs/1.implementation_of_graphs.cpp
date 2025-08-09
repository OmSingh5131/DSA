// Implementation using a list

#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph {

public:
    unordered_map < int, list<int> > adj;

    void addEdge( int u, int v , bool direction){
    // direction -> 0 means undirected graph 
    // direction -> 1 means directed graph 

    // creating a edge from u  to v 
        adj[u].push_back(v); // for the key u, you have a list, add v into that list.

        if( direction == 0 ){
            // it means it is an undirected graph
            adj[v].push_back(u);
        }
    }
    // Graph is succesfully created and now writing the print function to get the Graph
    void print(){
        for( auto i : adj) {
            cout << i.first << " --> ";
            for( auto j : i.second){
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

int main(){
    int n = 5; // The number of nodes
    int m = 6; // The number of edges

    graph g;

    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,1,0);
    g.addEdge(3,4,0);

    g.print();

    return 0;

}



// Vector way 

// https://www.naukri.com/code360/problems/create-a-graph-and-print-it_1214551?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#include<vector>

vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    vector<int> ans[n]; // This array contains vectors.
    for( int i = 0; i < m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }


    vector<vector<int>> adj(n);
    for(int i = 0; i < n; i++){
        adj[i].push_back(i);

        for(int j = 0; j < ans[i].size(); j++){
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}