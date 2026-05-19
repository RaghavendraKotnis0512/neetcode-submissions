class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;

        for(auto it:strs){
            string sorted_string=it;
            sort(sorted_string.begin(),sorted_string.end());
            mpp[sorted_string].push_back(it);
        }
        vector<vector<string>> result;
        for(auto ele:mpp){
            result.push_back(ele.second);
        }
        return result;
        
    }
};
