class Solution {
public:
    string countAndSay(int n) {
        if (n <= 0) return "";
        
        string result = "1"; // Start with the base case: countAndSay(1) = "1"
        
        // Generate the sequence from 2 to n
        for (int i = 2; i <= n; ++i) {
            string current = ""; // String to hold the current sequence
            int count = 1; // Initialize count of the current character
            
            // Iterate through the previous result
            for (int j = 1; j < result.size(); ++j) {
                if (result[j] == result[j - 1]) {
                    // If the current character is the same as the previous one, increment the count
                    ++count;
                } else {
                    // If it is different, append the count and the character to the current sequence
                    current += to_string(count) + result[j - 1];
                    count = 1; // Reset the count for the new character
                }
            }
            // Don't forget to append the last counted character
            current += to_string(count) + result.back();
            
            result = current; // Update the result with the current sequence
        }
        
        return result; // Return the nth term in the sequence
    }
};