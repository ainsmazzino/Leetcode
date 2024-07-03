//swsubarrlessthnk.cpp

int swsubarrlessthnk(vector<int>&nums, int target){
    int left=0, curr=1, ans=0;
    for (size_t right = 0; right < nums.size(); right++)
    {
        curr*=nums[right];
        while (curr>target) 
        {
            curr/=nums[left];
            left++;
        }
        ans=right-left+1;
        
    }
    
}