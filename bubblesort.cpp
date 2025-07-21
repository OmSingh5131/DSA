// Bubble sort Code :

void bubbleSort(vector <int> &arr, int n){

    for (int i =0; i < n-1; i++){
        
        for(int j =0; j = n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }
        }
    }
}

// Optimised : 

void bubbleSort(vector<int> &arr, int n){

    for (int i =0; i < n-1; i++){

        bool swapped = false;
        
        for(int j =0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swap = true;               

            }

        }
        
        if(swapped == false){
            break; // Algorithm is now sorted
        
        }

    }
}
