
// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM



//  First and Last Position of an Element In Sorted Array


// Approach 1 : Brute Force Complexity : O(n) TLE

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid_index;

    int int1;
    int int2;


    while(start <= end ){

        int mid_index = (start + end) / 2;

        if( k > arr[mid_index] ){
            start = mid_index + 1;
        }

        else if( k < arr[mid_index] ){
            end = mid_index - 1;
        }

        else{
            // now you got mid_index == key
            for( int i = 0; i <= mid_index; i++){
                if(arr[i] == k){
                    int1 = i;
                    break;
                }              
            }

            for( int j = arr.size() -1 ; j >= mid_index ; j--){
                if(arr[j] == k){
                    int2 = j;
                    break;
                }              
            }

            return {int1, int2};

        }

    }

    return {-1,-1};
    
}


// Appproach 2 : Time Complexity : O(logn0) [ Applying Binary Search two times]


int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)

{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}

// total number of occurence : (last occur - first occur ) + 1

