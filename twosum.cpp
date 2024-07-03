#include<iostream>
#include<vector>
using namespace std;

bool twosum(vector<int>&nums, int target){
    int left =0 ;
    int right = nums.size()-1;

    while (left<right)
    {
        int sum = nums[left]+nums[right];
        if (sum==target)
        {
            return true;
        }
        if (sum>target)
        {
            right--;
        }
        else{
            left++;
        }
    }
    return false;
    
}

int main(){
    vector<int>nums={1,3,4,5};
    int tag = 7;
    twosum(nums, tag);
    return 0;
}
