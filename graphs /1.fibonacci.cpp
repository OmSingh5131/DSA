
// Top down approach : Recursion + Memoization
// TC : O(n) SC : O(n + n)

#include<iostream>
#include<vector>
using namespace std;

int fib( int n, vector<int> &dp){

    // base case
    if( n <= 1){
        return n;
    }
    
    // step 3
    if(dp[n] != -1){
        return dp[n];
    }

    // step 2
    dp[n] = fib(n-1,dp) + fib(n-2,dp);
    return dp[n]; 
}

int main(){
    int n;
    cin >> n;

    // step 1
    vector<int> dp(n+1);
    for( int i = 0; i <=n; i++){
        dp[i] = -1;
    }
    cout << fib(n,dp) << endl;

    return 0;
}

// Bottom-up approach 
// TC : O(n) SC : O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    

    // step 1
    vector<int> dp(n+1);
    // step 2
    dp[1] = 1;
    dp[0] = 0;

    // step 3
    for( int i = 2; i <=  n ; i++){
        dp[i] = dp[i - 1] + dp[ i - 2];

    }
    cout << dp[n] << endl;

    return 0;
}

// Space optimisation 
// TC : O(n) SC : O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;

    if( n == 0){
        return 0;
    }
    
    int prevprev = 0;
    int prev = 1;

    // step 3
    for( int i = 2; i <=  n ; i++){
        int curr = prev + prevprev;
        // shift
        prevprev = prev;
        prev = curr;

    }
    cout << prev << endl;

    return 0;
}

