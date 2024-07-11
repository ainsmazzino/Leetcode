#include<iostream>
#include<vector>
using namespace std;

vector<bool> answer(vector<int> &nums, vector<vector<int>>queries, int limit){
    vector<int> prefix={nums[0]};
    for (int i = 1; i < nums.size(); i++) {
        prefix.push_back(prefix.back()+ nums[i]);
    }
    vector<int> ans;
    for(vector<int>& query:queries){
        int x = query[0], y=query[1];
        int curr = prefix[y]- prefix[x]+nums[x];
        ans.push_back(curr<limit);
    }
    return ans;
}



int main(){
    vector<int>nums={3, 1, 2, 7, 4, 2, 1, 1, 5};
    int tar=8;
    slidingwinlongs(nums, tar);
    return 0;
}
