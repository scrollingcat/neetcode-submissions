class Solution {
public:
    bool isAnagram(string s, string t) {
        int check[26];
        for (int i = 0; i < 26; i++)
        {
            check[i] = 0;
        }
        int n = s.size();
        int m = t.size();
        for (char c : s)
        {
            char x = c - 96;
            check[x] += 1;
        }
        for (char c : t)
        {
            char x = c - 96;
            check[x] -= 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (check[i] != 0) return false;
        }
        return true;
    }
};
