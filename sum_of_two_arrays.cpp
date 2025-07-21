// https://www.naukri.com/code360/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTabValue=PROBLEM





// Sum of two arrays

// Original Approach


#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.

	stack <int> s;
	int i = n - 1; // iterator for array, a
	int j = m - 1; // iterator for array, b

	int add_one = 0;
	vector<int> ans_vec;


	while( i >= 0 and j >=0 ){
		int ans = a[i] + b[j] + add_one;

		if( ans <= 9){
			s.push(ans);
			add_one = 0;
		}
		else{ // ans >=10 but we know that it will be >=10 and <= 18
			ans = ans % 10;
			s.push(ans);
			add_one = 1;
		}
		i --;
		j --;
	}

	while( i >= 0){
		int ans = a[i]  + add_one;

		if( ans <= 9){
			s.push(ans);
			add_one = 0;
		}
		else{ // ans >=10 but we know that it will be >=10 and <= 18
			ans = ans % 10;
			s.push(ans);
			add_one = 1;
		}
		i --;
	}

	while( j >= 0){

		int ans = b[j] + add_one;

		if( ans <= 9){
			s.push(ans);
			add_one = 0;
		}
		else{ // ans >=10 but we know that it will be >=10 and <= 18
			ans = ans % 10;
			s.push(ans);
			add_one = 1;
		}

		j --;
	}

	if (add_one == 1){
		s.push(1);
	}
	int size;
	while(!s.empty()){
		ans_vec.push_back(s.top());
		s.pop();
	}
	
	return ans_vec;
}

// Method 2 : We dont need stack, we can just add it in vector and then we can reverse the vector.