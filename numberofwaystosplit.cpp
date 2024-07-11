#include<iostream>
#include<vector>
using namespace std;

vector<bool> answer(vector<int>nums){
    vector<int> prefix={nums[0]};
    for (int i = 1; i < nums.size(); i++) {
        prefix.push_back(prefix.back()+nums[i]);
    }
    for (int i = 0; i < nums.size() - 1; ++i) {
        int left_section = prefix[i];
        //int right_section = prefix[(nums.size()-1)] - prefix[i]+nums[i];
        int right_section = prefix.back() - prefix[i];
        int add;
        if (left_section>=right_section){
            add++;
        }
    }
    return add;
}