class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        bool x = true;
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return palindrome(s, i + 1, j) || palindrome(s, i, j - 1);
            }
        }
        return true;
    }
private:
    bool palindrome(string s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else return false;
        }
        return true;

    }
};