
// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/



// Peak element index in a mountain array.



class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size() - 1;
        int ans;

        int mid_index = start + (end - start) / 2;

        while(start <= end){

            if( arr[mid_index] >  arr[mid_index + 1]){
                end = mid_index - 1;
            }

            else if ( arr[mid_index] < arr[mid_index + 1]){
                start = mid_index + 1;
            }

            else{
                break;
            }

            mid_index = start + (end - start) / 2;

        }

        return mid_index;

    
    }
};


/* A Learning:

mid_index = start + (end - start) / 2

Why doing this is important?

when I did this same thing out of the loop in top , mid_index actually stored
a value which was integer by putting s and e which I initialised then
it is not a formula rather a snapshot of value to initialise with.

to ab jab bhi mai loop ke andar s and e update kar rha hu, mujhe mid har loop
ke baad khud update karna padega, kyunki jo pehle define kiya tha, wo koi formula 
ya function nhi tha, wo bas ek container hai jisme ek value stored hai, 
konsi value stored hai ? initialisation ke waqt jo bhi store ki hogi,
similar case with s and e, unko initialise kiya tha, ab loop me update 
kardiya un containers ko.


aapko samajhne me dikkt isliye ho rhi hai, kyuki you see mid_index as some kind of formula
aapko s and e update karne me dikkat nahi ho rahi, because aap explicitly dekh sakte ho
ki s and e me value store ki hai, wo bas ek containers hain, jinki value pehle initialise ki and then
loop me jaake un container ki values update kar di.

mid_index bhi ek container hi tha jisme ek value rakhi thi, s + e-s/2 ke equal
koi formula nhi define kardiya ki mid ke andar yahi relation follow hoga, hamne bas initialisation
ke liye usme ek value rakh di which happened to be ouput of this expression.

mid_index bas ek simple container hai jisme initially  s + e-s/2 ko calculate karke value rakh di hai humne.



Peace.


*/