// https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

// Min and Max in Array

class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        int size = arr.size();
        int min = 1e9;
        int max = 1;

        for(int i = 0; i < size; i++) {
            if(arr[i] > max)
                max = arr[i];
            if(arr[i] < min)
                min = arr[i];
        }
        return {min, max};
    }
};


/* Learnings :

1) Dont raise the power using ^, 10 raise to 9 is 1e9
2) Variables declared outside of the loop and modified inside 
    loop retain their modification.

*/
