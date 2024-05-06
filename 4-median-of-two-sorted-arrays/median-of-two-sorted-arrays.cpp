class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int n= nums1.size()+nums2.size();
        vector<int>arr3(n);
        merge(nums1.begin(),nums1.end(),nums2.begin(), nums2.end(), arr3.begin());
        int al=arr3.size();
        // vector<int>arr4=arr3;
        sort(arr3.begin(),arr3.end());
        if(al%2==1){
            int p=((al)/2);
            return arr3[p];
        }
        else{
            int o=al/2;
            double k=(arr3[o]+arr3[o-1]);
            return ((k/2));
        }

    }
};