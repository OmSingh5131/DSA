# include<iostream>
using namespace std;


void print_array(int arr[], int size){
    cout << "Printing the Array....." << endl;
    for( int i = 0; i <size; i++)  {
        cout << arr[i] << " ";
    }

    cout <<endl ;

}

int main(){

    // declaring the array
    int arr[15];

    // accessing the array
    cout << "The value at the Index 5 is " << arr[5] << endl;  // Due to Initialisation, it will contain garbage values
    
    int second[3] = {4,5,6};
    cout << "The value at 2nd index is " << second[2] << endl;



    int third[15] = {2,7};
    
    for(int i = 0; i < 15; i++){
        cout << third[i] << " ";
    }

    cout << endl;



    int fourth[15] = {1};
    
    for(int i = 0; i < 15; i++){
        cout << fourth[i] << " ";
    }

    cout << endl;


    int five[5] = {1,3,5,7,9};
    print_array(five, 5);


    char six[5] = { 'a', 'b', 'f', 'g' };
    char seven[5] = { 'a', 'b', 'f', 'g','k' }; 
    char eight[5];  // It will print the Garbage Values

    cout << "CHARACTER ARRAY" << endl;

    for(int i = 0; i < 5; i++){
        cout << six[i] << " ";

    }

    cout << endl ;

    for(int i = 0; i < 5; i++){
        cout << seven[i] << " ";

    }

    cout << endl ;

    for(int i = 0; i < 5; i++){
        cout << eight[i] << " ";

    }

    cout << endl ;



    cout << endl << "Everything is fine! " << endl; // It helps to see that each line is executed which you see by tedious way of printing everything.

    return 0;
} 


// MAXIMUM and MINIMUM : 

#include<iostream>
#include<climits>
using namespace std;

// Straightforward code for maximum and minimum, max(a,b) and min(a.b) 
int getMax( int arr[], int size){
    int max = INT_MIN;
    for( int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
   // retrun the maximum value
    return max;
}

int getMin( int arr[], int size){
    int min = INT_MAX;
    for( int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    // retrun the maximum value
    return min;

}


int main(){
    int size;
    cout << "Enter the Size of the array :" << " ";
    cin >> size;
    int num[100];
    //taking input to an array
    for (int i =0; i < size; i++){
        cout << endl;
        cout << "Enter element : " ;
        cin >> num[i];    
    }
    cout << "Maximum Value is: " << getMax(num,size) << endl;
    cout << "Minimum Value is: " << getMin(num,size) << endl;
    return 0;
}



// Scope of the Array :

#include<iostream>
using namespace std;

void update(int arr[], int size){

    arr[0] = 120;

    for( int i = 0; i < size; i++){
        cout << arr[i] << " ";

    }

    cout << endl;


}

int main(){

    int arr[3] = {1,2,3};

    update(arr,3);

    for(int i = 0; i < 3; i++ ){
        cout << arr[i] << " ";

    }

    cout << endl;

    return 0;

}


// Linear Search 

#include<iostream>
using namespace std;

bool search( int arr [], int size, int key){

    for( int i =0; i <size ; i++ ){
        if( arr[i] == key){
            return 1;
        }else{
            return 0;
        }
    }

}

int main(){

    int arr[4] = { 2,6,7,8};
    int key;

    cout << "Enter the key you want to search " ;
    cin >> key;

    bool found = search( arr , 4, key);

    if(found == 1){
        cout << "Key is present" <<endl ;
    }
    else{
        cout << "Key is not Present "<< endl;
    }

    return 0;
}

// Reversing the Array :

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

void reverse(int arr[], int size){

    int start = 0;
    int end = size -1;

    while( start <= end ){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }


}

int main(){

    int array[6] = {7,8,81,2,9,58 };
    int brray[5] = {3,1,4,8,1};

    reverse(array,6);
    reverse(brray,5);

    printArray(array,6);
    printArray(brray,5);

    return 0;
}