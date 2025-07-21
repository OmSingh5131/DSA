// https://leetcode.com/problems/merge-sorted-array/description/





// Expected solution ****************:



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m -1;
        int j = n -1;
        int k = m + n -1;

        while ( i >=0 and j >= 0){
            if( nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i = i - 1;

            }
            else{
                nums1[k] = nums2[j];
                    j = j-1;
                
            }

            k =k-1;
        }

        while( j >= 0){
            nums1[k] = nums2[j];
            j = j-1;
            k = k-1;
        }
        
    }
};

// For the leetcode


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for( int i = 0; i < n; i++){
            nums1[ m + i ] = nums2[i] ;
        }
        
        
        sort(nums1.begin(), nums1.end());
        
    }
};




// Solution - 2 : With extra space.


void merge (int arr1[], int n, int arr2[], int m){

    int i = 0;
    int j =0;
    int k = 0;

    while(i < n && j <m){
        if(arr1[i] < arr2[j]){
            arr[k] = arr[i];
            i++;
            k++;
        }
        else{
            arr[k] == arr[j];
            j++;
            k++;
        }
    }
    // agar 1st array bachi hai
    while( i < n){
        arr[k] == arr[i];
        i++;
        k++;
    }

    // agar 2nd array bachi hai
    while( j < m){
        arr[k] == arr[j];
        j++;
        k++;
    }
}

// Beautiful use of Post Increment opereator:

void merge (int arr1[], int n, int arr2[], int m){

    int i = 0;
    int j =0;
    int k = 0;

    while(i < n && j <m){

        if(arr1[i] <= arr2[j]){
            arr[k++] = arr[i++]; // k and i ki current value use karlo, fir baad me update kar dena.
            
        }
        else{
            arr[k++] == arr[j++]; // k and j ki current value use karlo fir baad me update kardena.
            
        }
    }
    // agar 1st array bachi hai
    while( i < n){
        arr[k++] == arr[i++]; // k and i ki current value use karlo and then baad me update kar dena.
        
    }

    // agar 2nd array bachi hai
    while( j < m){
        arr[k ++] == arr[j ++];
        
    }
} 



