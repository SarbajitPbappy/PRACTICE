#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string word, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (word[start] != word[end]) {
        return false;
    }
    return isPalindrome(word, start + 1, end - 1);
}
int main() {
    string word;
    cin >> word;
    int start = 0;
    int end = word.length() - 1;
    if (isPalindrome(word, start, end)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}