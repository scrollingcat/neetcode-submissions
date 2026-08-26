class Solution {
public:


    bool check(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j]) 
            {
                // cout << "false for " << s << endl;
                return false;
            }
            i++;
            j--;
        }
        // cout << "true for: " << s << endl;
        return true;
    }

    void helper(string s, int idx, vector<vector<string>>& res, vector<string>& cur_partition)
    {
        // we need the string, index, a data struction to store the partitions

        if (idx >= s.size())
        {
            res.push_back(cur_partition);
            return;
        }
        for (int i = idx; i < s.size(); i++)
        {
            string tmp = "";
            for (int j = idx; j < i + 1; j++)
            {
                tmp += s[j];
            }
            if (check(tmp))
            {
                cur_partition.push_back(tmp);
                helper(s, i + 1, res, cur_partition);
                cur_partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> cur;
        vector<vector<string>> res;
        helper(s, 0, res, cur);
        return res;
    }
};