// https://leetcode.com/problems/valid-palindrome/


// Valid Palindrome
// Learning 1 : In strings and character world for ASCII, 
// take char >= '0' not char >= 0.
// '0' is char and 0 is int, there is difference.






// My Own :
// Attempt 2 : on my own


class Solution {

private:

    bool validChar( char character ){
        if( character >= 'a' && character <= 'z'){
            return true;
        }
        else if(character >= 'A' && character <= 'Z'){
            return true;
        }
        else if(character >= '0' && character <= '9'){
            return true;

        }
        else{
            return false;
        }

    }

    char toLower(char character){
        if((character >= 'a' && character <= 'z') || (character >= '0' && character <= '9')){
            return character;

        }
        else{
            char small = character - 'A' + 'a';
            return small; 
        }
    }


    bool checkPalindrome( string s){
        int start = 0;
        int end = s.size() - 1;
        while( start < end ){
            if(s[start] == s[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
            
        }
        return true;

    }

public:


    bool isPalindrome(string s) {


    // Converting the string into condensed form
    string temp = "";
    for( int i =0; i < s.size(); i++){
        if(validChar(s[i])){
            temp.push_back(s[i]);
        }
        else{
            continue;
        }
    }

    // got the condensed form of string as temp, now we need to convert all those into small.
    for( int i = 0; i < temp.size(); i++ ){
        temp[i] = toLower(temp[i]);
    }

    // got all small, now we need to return true if it is a palindrome.

    return checkPalindrome(temp);
   


    }
};



// Good :
class Solution {
private:
    bool valid(char ch){
        if( (ch >= 'a' && ch <='z') ||( ch >= 'A' && ch <='Z') ||( ch >= '0' && ch <='9')){
            return 1;
        }

        return 0;

    }

    char toLowerCase( char ch){
        if((ch >= 'a' && ch <='z') || ( ch >= '0' && ch <='9')){
            return ch;
        }

        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string a){
        int start = 0;
        int end = a.length() -1;

        while( start < end ){
            if( a[start ] != a[end]){
                return 0;
            }

            start ++;
            end --;
        }

        return 1;
    }


public:
    bool isPalindrome(string s) {

        // removing the faltu character
        string temp = "";
        for( int j = 0; j < s.length(); j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }

        // lowercase me kardo

        for( int j = 0; j < temp.length(); j++){
            temp[j] = toLowerCase(temp[j]);
        }

        return checkPalindrome(temp);
        
    }
};