/*
You have two strings of lowercase English letters. You can perform two types of operations on the first string:

Append a lowercase English letter to the end of the string.
Delete the last character of the string. Performing this operation on an empty string results in an empty string.
Given an integer, k, and two strings, s and t, determine whether or not you can convert s to t by performing exactly k of the above operations on s. If it's possible, print Yes. Otherwise, print No.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    
    string s,t;
    cin >> s >> t;
    
    int k;
    cin >> k;
    
    int i = 0;
    for ( ; i < min(s.length(),t.length()); ++i) {
        if (s[i] != t[i]) {
            break;
        }
    }
    
    int min_ops = (t.length()-i) + (s.length()-i);
    
    int more_ops = min_ops;
    while(more_ops < k) {
        if (i-- > 0)
            more_ops += 2;
        else
            more_ops++;
    }

    cout << (more_ops == k ? "Yes" : "No") << '\n';
    
    return 0;
}
