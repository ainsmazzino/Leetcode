 
#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector<char>& s) {
    int left =0;
    int right=s.size()-1;
    while(left<right){
        char temp;
        temp=s[left];
        s[left++]=s[right];
        s[right--]=temp;
    }
}

int main(){
    vector<char>s={'h','e','l'};
    reverseString(s);
    return 0;
}