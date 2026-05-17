class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int ans=target-nums[i];

            if(mpp.find(ans)!=mpp.end() && mpp[ans]!=i){
                int idx1 = i;
                int idx2 = mpp[ans];

                if(idx1 > idx2)
                    return {idx2, idx1};
                else
                    return {idx1, idx2};
            }
        }
        return {};
    }
};
