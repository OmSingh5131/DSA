

char toLowerCase( char ch){
    if( ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool checkPalindrome( char arr[], int n){
    int start = 0;
    int end = n -1;
    
    while(start < end){
        if ( toLowerCase(arr[start]) != toLowerCase(arr[end]) ){
            return false;
        }
        
        start ++;
        end --;
    }

    return true;

    // https://leetcode.com/problems/valid-palindrome/

}

void reverse(char name[], int n){
    int start = 0;
    int end = n -1;

    while( start < end){
        swap(name[start], name[end]);
        start ++;
        end --;
    }

// https://leetcode.com/problems/reverse-string/description/   
}

int getLength(char name[]){
    int count = 0;
    for( int i = 0; name[i] != '\0'; i++){
        count ++;
    } 

    return count;
}

char getMaxOccuringChar(string& s) {
        
        int arr[26] = {0};
        
        for( int i = 0; i < s.length(); i++){
            char ch = s[i];
            int number = 0;
            number = ch - 'a';
            arr[number]++;
        }
        
        int maximum = - 1;
        int ans = 0;
        
        for( int j = 0; j < 26; j++ ){
            if( maximum < arr[j]){
                maximum = arr[j];
                ans = j; 
            }
        }
        
        char final_ans = 'a' + ans;
        return final_ans;

        // https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
            
}

string replaceSpaces(string &str){

	string temp = "";

	for( int i = 0; i < str.length(); i++){
		if(str[i] == ' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');

		}

		else{
			temp.push_back(str[i]);
		}
	}

	return temp;
	
    // https://www.naukri.com/code360/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
}

string removeOccurrences(string s, string part) {

    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
    
    // https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
    }
