class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        size_t n = strs.size();
        for (int i = 0; i < n; i++)
        {
            string x = strs[i];
            sort(x.begin(), x.end());
            if (m.find(x) == m.end())
            {
                vector<string> vec = {strs[i]};
                m[x] = vec;
            }
            else
            {
                m[x].push_back(strs[i]);
            }
        }
        for (const auto& c : m)
        {
            ans.push_back(c.second);
        }
        return ans;
    }
};
