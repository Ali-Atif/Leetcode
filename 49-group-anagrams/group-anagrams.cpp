class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto c:strs){
            string word =c;
            sort(word.begin(),word.end());
            mp[word].push_back(c);
        }
    vector<vector<string>>res;
        for(auto c:mp){
            res.push_back(c.second);
        }
        return res;
    }
};