class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;

        for(auto it:s){
            mpp[it]++;
        }

        for(int i = 0;i<t.size();i++){
            if(mpp.find(t[i])!=mpp.end()){
                mpp[t[i]]--;
                if(mpp[t[i]]==0){
                    mpp.erase(t[i]);
                }
            }else{
                return false;
            }
        }
        return mpp.empty();
    }
};
