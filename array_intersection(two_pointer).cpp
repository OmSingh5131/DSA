// https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

//  Intersection Of Two Sorted Arrays


// Approach - 1 [ Brute Force ]

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
	for( int i = 0; i < n; i++){
		int element = arr1[i];

		for( int j =0; j < m; j++){
			if( arr2[j] == element){
				ans.push_back(element);
				arr2[j] = -1;
				break;
			}
		}
	}
	return ans;

}


// Approach - 2
// Slightly optimised by using the sorted array condition

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
	for( int i = 0; i < n; i++){
		int element = arr1[i];

		for( int j =0; j < m; j++){

			if( element < arr2[j]){ // as it was given array is sorted in non decreasing order.
				break;
			}
			if( arr2[j] == element){
				ans.push_back(element);
				arr2[j] = -1;
				break;
			}
		}
	}
	return ans;

}

// Approach - 3

// Exploiting the sorted array condiition

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;

	int i =0;
	int j =0;

	while( i < n && j < m){
		if( arr1[i] == arr2[j] ){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if( arr1[i] > arr2[j]){
			j ++;
		}
		else{
			i++;
		}
	}



	return ans;

}