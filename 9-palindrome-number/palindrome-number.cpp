#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0){
          return false;
      }
        string s=to_string(x);
        string reversed_s=s;
        reverse(reversed_s.begin(),reversed_s.end());
        return s==reversed_s;
        
        
      }
        
};

