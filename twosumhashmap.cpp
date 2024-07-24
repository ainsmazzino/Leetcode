#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

vector<int> twosum(vector<int>&nums, int target){
    unordered_map<int, int> dic;
    for(int i;i<nums.size();i++){
        int vals = target - nums[i];
        if(dic.find(i)!=dic.end()){
            return {i, dic[vals]};
        }
    }
}

int main(){
    string s="lol";
    string t="lmalolo";
    checksubs(s,t);
    return 0;
}
