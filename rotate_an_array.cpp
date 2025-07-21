// https://leetcode.com/problems/rotate-array/

// Rotate an Array

// My approach : Brute force and TLE

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();

        for( int i = 0; i < k; i++){

            int pop = nums[n-1];
            for( int j = 1; j < n; j++){
                nums[n-j] = nums[n-j-1];
            }
            nums[0] = pop;
        }
       
    }
};

// Optimised and out of the box solution

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> temp(nums.size());

        for( int i =0; i < nums.size(); i ++){
            temp[((i + k)% nums.size())] = nums[i];
        }

        //copy results 
        nums = temp;
        
    }
};

