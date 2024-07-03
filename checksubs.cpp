#include<iostream>
#include<vector>
using namespace std;

bool checksubs(string s, string t){
    int i,j=0;
    while (i<s.length()&&j<t.length())
    {
        if (s[i]==t[j])
        {
            i++;
        }
        j++;
        
    }
    return i==s.length();
    
}

int main(){
    string s="lol";
    string t="lmalolo";
    checksubs(s,t);
    return 0;
}