class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        for(int i=0;i<intervals.size();i++){
            if(result.empty()||intervals[i][0]>result.back()[1])
                 result.push_back(intervals[i]);
            else
                result.back()[1] = max(intervals[i][1], result.back()[1]);
        }

        return result;
            
    
    }
};