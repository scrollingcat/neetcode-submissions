class Solution {
public:
    void helper(vector<int>& nums, vector<int>& cur, vector<vector<int>>& res, int idx)
    {
        if (idx >= nums.size())
        {
            res.push_back(cur);
            return;
        }
        helper(nums, cur, res, idx + 1);
        cur.push_back(nums[idx]);
        helper(nums, cur, res, idx + 1);
        cur.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        helper(nums, cur, res, 0);
        return res;

    }
};