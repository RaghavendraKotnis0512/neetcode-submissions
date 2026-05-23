class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int finalCount=1;
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) {
  continue; 
}
            if(nums[i]==nums[i+1]-1){
                count++;
                finalCount=max(finalCount,count);
            }else{
                count=1;
            }
        }
        return finalCount;
    }
};
