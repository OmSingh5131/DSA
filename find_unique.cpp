// https://www.naukri.com/code360/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1


// Find Unique

// My Method :


int findUnique(int *arr, int size)
{
    
    for( int i = 0; i < size; i++){
        int count = 0;
        int target = arr[i];
        for( int j =0; j < size; j++){
            if( arr[j] == target){
                count++;
            }
        }

        if( count == 1){
            return target;
        }
        

    }

}


// More Optimised method :

int findUnique( int *arr, int size){
    int ans = 0;

    for( int i =0;  i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}