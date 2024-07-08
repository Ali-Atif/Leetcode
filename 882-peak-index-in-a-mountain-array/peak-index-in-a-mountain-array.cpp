class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0;
        int right=arr.size();
     int mid=(left+right)/2;
        while(left<right){
            if(arr[mid]<arr[mid+1]){
                 left=mid+1;
            }
            else{
                right=mid;
            }
             mid=(left+right)/2;
        }  
        return left;
        }
    
};