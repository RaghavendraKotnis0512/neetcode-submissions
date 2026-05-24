class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxLength=0;
        for(auto num:st){
            if(st.find(num-1)==st.end()){
                int currentNum=num;
                int currentLength=1;
                while(st.count(currentNum+1)){
                    currentNum++;
                    currentLength++;
                }
                maxLength=max(maxLength,currentLength);
            }
            
        }
        return maxLength;
        
    }
};
