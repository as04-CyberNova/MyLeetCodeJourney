class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        return t.substr(1, t.length() - 2).find(s) != string::npos;
    }
};