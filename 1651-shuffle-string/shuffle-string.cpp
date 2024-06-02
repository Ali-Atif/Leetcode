#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // Create a string of the same length as s initialized with empty characters
        string result(s.length(), ' ');

        // Shuffle the characters according to the indices
        for (int i = 0; i < s.length(); i++) {
            result[indices[i]] = s[i];
        }

        return result;
    }
};