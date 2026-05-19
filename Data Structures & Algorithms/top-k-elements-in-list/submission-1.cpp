class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mymap;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            mymap[nums[i]]++;
        }
        vector<vector<int>> vec (n + 1);
        for (auto& p : mymap)
        {
            vec[p.second].push_back(p.first);
        }
        vector<int> ans;
        for (int i = n; i >= 0; i-- )
        {
            for (int j = 0; j < vec[i].size() && k > 0; j++)
            {
                ans.push_back(vec[i][j]);
                k--;
            }
        }
        return ans;

    }
};
