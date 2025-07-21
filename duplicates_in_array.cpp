
// https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

// Duplicate in the Array


// Counting Method :

int findDuplicate(vector<int> &arr) 
{
    int size = arr.size();
    int count_array[size] = {0};
    for( int i = 0; i < size; i++){
        int index = arr[i];
        count_array[index]++;

    }

    for( int i = 0; i < size; i++){
        if(count_array[i] == 2){
            return i;
        }
    }
	
}



// Optimised XOR method:


int findDuplicate(vector<int> &arr) 
{
    int size = arr.size();

    int ans = 0;
    for (int i =0; i < size; i++){
        ans = (ans^arr[i]);
    }

    for( int i = 1; i < size; i++ ){
        ans = (ans^i);
    }

    return ans;
	
}


// Wrong because order pata nahi hai and 2nd loop me directly 
// arr[i] kese daal rhe ho, i dalo keval