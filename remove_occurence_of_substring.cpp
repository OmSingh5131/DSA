//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/submissions/1679460837/


// Remove the occurences of substring
class Solution {
public:
    string removeOccurrences(string s, string part) {

        while(s.length() != 0 && s.find(part) < s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
        
    }
};