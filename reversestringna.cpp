
#include <iostream>
#include <vector>
using namespace std;

vector<char> reverseString(vector<char>& s) {
    vector<char> t;
    int i = 0;
    int j = s.size() - 1;
    while (i < s.size()) {
        t.push_back(s[j]);
        j--;
        i++;
    }
    for (auto it :t) {
        cout << it << " ";
    }
    //return t;  // Return the reversed vector
}

int main() {
    vector<char> s = {'h', 'e', 'l'};
    reverseString(s);
    return 0;
}




#include <iostream>
#include <vector>
using namespace std;

vector<char> reverseString(vector<char>& s) {
    vector<char> t;
    int i = 0;
    int j = s.size() - 1;
    while (i < s.size()) {
        t.push_back(s[j]);
        j--;
        i++;
    }
    for (auto it :t) {
        cout << it << "a ";
    }
    //return t;  // Return the reversed vector
}

int main() {
    vector<char> s = {'h', 'e', 'l'};
    reverseString(s);
    return 0;
}



