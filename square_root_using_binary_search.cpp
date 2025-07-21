
// https://www.naukri.com/code360/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM





//  Square Root of a number using Binary Search

int floorSqrt(int n)
{
    int s = 0;
    int e = n;

    long long int mid  = s + (e-s)/2;

    long long int ans = 0;

    while( s <= e ){

        long long int square = mid*mid;

        if( square == n  ){
            return mid;
        }

        else if( square > n){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e-s)/2;


    }

    return ans;
}

// To cater to the test cases, instead of int we put long long int.


// for more precision:

double morePrecision(int n, int precison, int floor){

    double factor = 1;
    double ans = floor;

    for( int i = 0; i < precision; i++){
        factor = factor / 10;

        for ( double j = ans; j*j < n; j = j + factor){
            ans = j;
        }
    }

    return ans;
}
