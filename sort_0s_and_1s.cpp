// https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1

// Sort 0 and 1s

// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int i =0;
        int j = arr.size() - 1 ;
        
        while( i < j){
            
            while( arr[i] == 0 && i < j){
                i++;
            } // This i < j check is needed in each case, as when it overflows, the program might not crash but C++ access grabage values and give wrong answers
            while( arr[j] ==1 && i < j) {
                j--;
            }
            
            if(arr[i] == 1 && arr[j] == 0 && i < j){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        
    }
};