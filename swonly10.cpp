#include<iostream>
#include<vector>
using namespace std;

int swonly10(string nums){
    int left=0, right=0, curr=0,ans=0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right]=='0')       
        {
            curr++;
        }
        
        while (curr>1)
        {
            if (nums[left]=='0')
            {
                curr--;
            }
            left++;
        }
        ans=max(ans,right-left+1);
    }
    return ans;
    
}

int main(){
    string nums="101101";
    //int tar=7;
    int n=swonly10(nums);
    cout<<n;   
    return 0;
}
