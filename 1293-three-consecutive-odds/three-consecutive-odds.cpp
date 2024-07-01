// class Solution {
// public:
//     bool threeConsecutiveOdds(vector<int>& arr) {
//         int count=0;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]%2!=0){
//                 count++;
//             }
//             if (count == 3) {
//                     return true; // If three consecutive odds are found, return true
                
//             } else {
//                 count = 0; // Reset the count if the number is not odd
            
//         }
// }
//         // Return false if no three consecutive odd numbers are found
//         return false;
        
//     }
// };
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        
        // Iterate through the array to check each element
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 != 0) { // Check if the number is odd
                count++; // Increment the count of consecutive odd numbers
                if (count == 3) {
                    return true; // If three consecutive odds are found, return true
                }
            } else {
                count = 0; // Reset the count if the number is not odd
            }
        }
        
        // Return false if no three consecutive odd numbers are found
        return false;
    }
};
