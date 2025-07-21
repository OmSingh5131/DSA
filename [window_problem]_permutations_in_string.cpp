// https://leetcode.com/problems/permutation-in-string/description/



// Window Problem
// Permutations in String


class Solution {

private:

    bool checkEqual(int count1[26], int count2[26]){
        for(int i =0; i < 26; i++){
            if( count1[i] != count2[i]){
                return false;
            }
        }
        return true;

    }

public:
    bool checkInclusion(string s1, string s2) {

        int count1[26] = {0};
        for( int i = 0; i < s1.size(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        // traverse the s2 string in this window
        int i = 0;
        int windowSize = s1.size();
        int count2[26] = {0};

        // for the first window
        while( i < windowSize && i < s2.size()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count1, count2) ){
            return 1;
        }
        
        // running for the next window.

        while( i < s2.size()){
            char newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;

            char oldChar = s2[ (i - windowSize) ];
            index = oldChar - 'a';
            count2[index] --;
            i++;

            if(checkEqual(count1,count2)){
                return 1;
            }
        }

        return 0;
    }
};