class Solution {
public:
    void helper(vector<int>& nums, int idx, vector<vector<int>>& res, vector<int>& cur)
    {
        res.push_back(cur);
        for (int i = idx; i < nums.size(); i++)
        {
            if (i != idx && nums[i] == nums[i - 1]) continue;
            cur.push_back(nums[i]);
            helper(nums, i + 1, res, cur);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        sort(nums.begin(), nums.end());
        helper(nums, 0, res, cur);
        return res;
    }
};