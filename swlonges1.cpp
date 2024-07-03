class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,curr=0,ans=0;
        for(int right =0;right<nums.size();right++){
            if(nums[right]==0){
                curr++;
            }
            while(left<=right&&curr>k){
                if(nums[left]==0){
                    curr--;
                }
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};