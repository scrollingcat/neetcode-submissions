class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string max_str = strs[0];
        size_t n = strs.size();
        for (int i = 1; i < n; i++)
        {
            string curr = "";
            size_t m = max_str.size();
            for (int j = 0; j < m; j++)
            {
                if (strs[i][j] == max_str[j])
                {
                    curr += max_str[j];
                }
                if (curr.size() == 0) return curr;
            }
            max_str = curr;
        }
        return max_str;
    }
};