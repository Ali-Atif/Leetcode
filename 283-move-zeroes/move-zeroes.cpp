class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIndex = 0; // Pointer to place non-zero elements

        // Step 1: Move all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[nonZeroIndex] = nums[i];
                nonZeroIndex++;
            }
        }

        // Step 2: Fill the remaining positions with zeros
        for (int i = nonZeroIndex; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

//class Solution {
//public:
 //   void moveZeroes(vector<int>& nums) {
  //      for(int i=0;i<nums.size();i++){
  //          for(int j=1;j<nums.size();j++){
  //              if(nums[j-1] ==0){
  //              swap(nums[j-1],nums[j]);
  //              }
  //          }
 //   }
 //   }
//};
//