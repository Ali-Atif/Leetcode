class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> charcount; // Create an unordered map to store character counts
        
        // Count the occurrences of each character in the string
        for(char c : s) {
            charcount[c]++; // Increment the count for character 'c'
        }
        
        // Iterate over the string to find the first unique character
        for(int i = 0; i < s.length(); ++i) {
            if(charcount[s[i]] == 1) { // Check if the character count is 1
                return i; // Return the index of the first unique character
            }
        }
        
        return -1; // Return -1 if no unique character is found
    }
};