// Swapping the Alternate positions of the array.


#include<iostream>
using namespace std;

void print_array(int arr[], int size){
    for( int i = 0; i < size ; i = i + 1){
        cout << arr[i];

    }
    cout << endl;
}

void alternate_swap(int arr [], int size){

    if( size % 2 == 0 ){
        for( int i = 0; i < size;  i = i + 2){
            swap(arr[i],arr[i + 1]);
        }

    print_array(arr,size);

    }
    else{
        for(int i = 0; i < size -1 ; i = i + 2){
            swap(arr[i],arr[i+1]);
        }

    print_array(arr,size);

    }

}

int main(){
    int arr[ 100 ];
    int size;

    cout << "Enter the Size of your array : ";
    cin >> size;
    cout << endl;

    for(int i =0; i < size; i++){
        cout << "Enter the element " << i << " of the array : ";
        cin >> arr[i];

    }
    cout << "Original Array : ";
    print_array( arr , size );
    cout << endl;


    cout << "Swapped Array : ";
    alternate_swap(arr,size);
    cout << endl;


}
