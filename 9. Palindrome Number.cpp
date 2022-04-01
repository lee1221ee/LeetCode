// 字串

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string sr = to_string(x);
        reverse(sr.begin(), sr.end());
        if(s == sr)
            return true;
        else
            return false;
    }
};
