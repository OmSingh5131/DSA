
// https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1

// Linear Array Seach


class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int size = arr.size();
        for(int i =0; i <size; i++){
            if(arr[i] == x){
                return i;
            }
        
        }
        return -1;
    }
};