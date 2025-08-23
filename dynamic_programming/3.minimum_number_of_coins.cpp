// Minimum number of coins

// Recursion Logic

// https://www.naukri.com/code360/problems/minimum-elements_3843091?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM



#include<bits/stdc++.h>
using namespace std;


int solveRec( vector<int> &num, int x){

    // base case
    if( x == 0){
        return 0;
    }
    if( x < 0){
        return INT_MAX;
    }

    // Reursion Relation 

    int mini = INT_MAX;

    for( int i = 0; i < num.size(); i++){

        int ans = solveRec( num, x - num[i]);
        if( ans != INT_MAX){
            mini = min( mini, ans + 1);
        }    
    }
    return mini;

}

int minimumElements(vector<int> &num, int x)
{
    int ans = solveRec( num, x);
    if( ans == INT_MAX){
        return -1;
    }
    else{
        return ans;
    }
}


// DP : Recursion + Memoization 

#include <bits/stdc++.h> 

int solveRec( vector<int> &num, int x, vector<int> &dp){

    // base case
    if( x == 0){ 
        return 0;
    }
    if( x < 0){
        return INT_MAX;
    }

    // Step 3 : // After the base case return if the dp array has element
    if( dp[x] != - 1){
        return dp[x];
    }

    // Reursion Relation 

    int mini = INT_MAX;

    for( int i = 0; i < num.size(); i++){

        int ans = solveRec( num, x - num[i],dp);
        if( ans != INT_MAX){
            mini = min( mini, ans + 1);
        }    
    }
    // Step 2 : Store the element in dp array
    dp[x] = mini;
    return mini;
    

}

int minimumElements(vector<int> &num, int x)
{

    // Step 1 : Make the dp array
    vector<int> dp( x + 1, - 1);
    int ans = solveRec( num, x, dp );
    if( ans == INT_MAX){
        return -1;
    }
    else{
        return ans;
    }
}