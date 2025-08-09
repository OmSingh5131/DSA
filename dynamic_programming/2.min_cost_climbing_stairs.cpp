// Min Cost Climbing Stairs

// https://leetcode.com/problems/min-cost-climbing-stairs/description/

// Simple Recursion 


#include<bits/stdc++.h>
using namespace std;

int solve( int n, vector<int> &cost){

    // base case :
    if( n == 0){
        return cost[0];
    } 

    else if( n == 1){
        return cost[1];
    }

    // recursive function

    int ans = cost[n] + min( solve( n -1, cost), solve( n -2, cost) );
    return ans;

}



int minCost(vector<int> & cost){

    int n = cost.size(); // It gives the costs of 0th, 1st, 2nd ...... n-1 th stair, there will be no cost for standing on the destination/ nth stair

    // recursion
    int ans = min( solve (n - 1, cost) , solve( n- 2, cost));
    return ans;

    // from main, we have not included cost for the destination and in the calling, we have given n-1 and n-2.
    cout << ans;


}

int main( ){


    
    vector<int> vec = {10,2,4,50,2};
    int output = minCost(vec);
    cout << output << endl;
    return 0 ;
}