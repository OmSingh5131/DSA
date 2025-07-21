// https://www.geeksforgeeks.org/problems/reverse-an-array/1

// Reverse an Array

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int size = arr.size();
        int start = 0;
        int end = size - 1;
        
        while(start < end){
            swap(arr[start],arr[end]);
            start ++;
            end --;
        }
    }
};