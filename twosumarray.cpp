#include<iostream>
#include<vector>
using namespace std;

vector<int> twosumarray(vector<int>& arr1,vector<int>& arr2){
    vector<int> arr;
    int i,j=0;

    while (i<arr1.size()&&j<arr1.size())
    {
        if (arr1[i]<arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
        }
        else{
            arr.push_back(arr2[2]);
            j++;
        }
    }
    while (i<arr1.size())
    {
        arr.push_back(arr1[i]);
        i++;
    }
    while (j<arr2.size())
    {
        arr.push_back(arr2[j]);
        j++;
    }
    return arr;

}




int main(){
    vector<int>nums={1,3,4,5};
    vector<int>nums2={1,3,4,5};
    //int tag = 7;
    twosumarray(nums, nums2);
    return 0;
}
