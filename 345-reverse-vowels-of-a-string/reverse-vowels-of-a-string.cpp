class Solution {
public: 
   bool isvow (char c){
       c = tolower(c);
       return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   }
        string reverseVowels(string s) {
            int l=0;
            int r=s.size()-1;
            while(l<r){
           while(l<r && !isvow(s[l])){
                l++;}
             while(l<r && !isvow(s[r])){
                r--;}
            if(l<r){
               char temp =s[l];
                s[l]=s[r];
                s[r]=temp;
                l++;
                r--;
                }
            }
       return s;
        
        }
   };