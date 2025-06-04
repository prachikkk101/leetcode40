class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                return checkPalindrome(s, left + 1, right) || checkPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }

private:
    bool checkPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
