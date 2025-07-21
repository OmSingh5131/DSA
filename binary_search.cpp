#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){

    int start_index = 0;
    int end_index = size - 1;

    int mid_index = (start_index + end_index)/2 ; 
    // to make it immune to integer overflow, mid_index = start_index + (end_index - start_index)/2

    while( start_index <= end_index ){

        if (arr[mid_index] = key) {
            return mid_index;
        }

        else if(arr[mid_index] < key){
            start_index = mid_index + 1;
            // take the right hand part and new array is right array , with no change in index required
        }

        else{
            end_index = mid_index - 1;
            // take the left hand part and new array is left array , with no change in index required
        }

        // Now find the new mid_index for the updated start_index and end_index.

        mid_index = (start_index + end_index) / 2;
        // to make it immune to integer overflow, mid_index = start_index + (end_index - start_index)/2


    }

    // why you came out of the loop ? Ah ! start_index exceeded end index, means the key is not present in the array.

    return -1;

}
