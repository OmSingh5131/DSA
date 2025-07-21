// https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1


// Maximum Occurence of the string 

// Attempt 2

class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        int arr[26]= {0};
        
        for(int i = 0; i < s.size(); i++){
            // element is s[i];
            int index = s[i] - 'a';
            arr[index] ++;
        }
        
        int max_index = 0;
        int maximum  = -1;
        
        
        for( int i = 0; i < 26; i++){
            if(arr[i] > maximum){
                max_index = i;
                maximum = arr[i];
                
            }
        }
        
        char max_occuring_character = 'a' + max_index;
        return max_occuring_character;
        
    }
};