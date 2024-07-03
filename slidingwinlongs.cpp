
#include<iostream>
#include<vector>
using namespace std;

int slidingwinlongs(vector<int>& nums, int target){
    int curr=0, left=0,right=0,ans=0;
    int n= nums.size();
    for(int i ;i<n;i++){
        curr+=nums[right];
        while (curr>target)
        {
            curr-=nums[left];
            left--;
        }
        ans = max(ans, right - left + 1);        
    }
    return ans;
}

int main(){
    vector<int>nums={1,2,3,4};
    int tar=7;
    int n=slidingwinlongs(nums, tar);
    cout<<n;   
    return 0;
}
