class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0;
        int maxLength = 1;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            int l1 = expandAroundCenter(s, i, i);     
            int l2 = expandAroundCenter(s, i, i + 1); 

            int currLength = max(l1, l2);

            if (currLength > maxLength) {
                maxLength = currLength;
                start = i - (currLength - 1) / 2;
            }
        }

        return s.substr(start, maxLength);
    }

private:
    int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};