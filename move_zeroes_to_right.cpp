// https://leetcode.com/problems/move-zeroes/description/

// Move Zeros to the right and order or non zero values should be retained

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i = 0;
        
        for(int j =0; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
    }
};