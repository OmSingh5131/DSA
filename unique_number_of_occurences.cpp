
// https://leetcode.com/problems/unique-number-of-occurrences/description/


// Brute Force Approach

class Solution{
public:
    bool uniqueOccurrences(vector<int>& arr) {
       
    int size = arr.size();
    int count_positive_array[1001]  = {0};
    int count_negative_array[1001] = {0};
    
    for( int i =0; i < size; i ++){

        if(arr[i] >= 0){
            int index1 = arr[i];
            count_positive_array[index1] ++;
        }

        if(arr[i] < 0){
            int index2 = -arr[i];
            count_negative_array[index2] ++;
        }
    }


    int unique_occurence_array[1001] = {0};

    int i = 0;
    for( int j = 0; j < 1001; j++){
        if( count_positive_array[j] != 0 ){
            unique_occurence_array[i] = count_positive_array[j];
            i++;
        }

        if(count_negative_array[j] != 0 ){
            unique_occurence_array[i] = count_negative_array[j];
            i++;
        }
    }
    
    for( int i = 0; i < 1001; i++){
        if( unique_occurence_array [i] == 0){
            continue;
        }

        for( int j = 0; j < 1001 ; j++){
            if( i == j) {
                continue;
            }
            if(unique_occurence_array[j] == unique_occurence_array[i]){
                return false;
            }
        }
    
    }

    return true; 

    }
   
};