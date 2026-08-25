class Solution {
public:
    void helper(vector<int>& nums, int target, int n, vector<vector<int>>&res, vector<int>&cur)
    {
        if (n == nums.size())
        {
            if (target == 0)
            {
                res.push_back(cur);
            }   
            return;
        }
        if (nums[n] <= target)
        {
            cur.push_back(nums[n]);
            helper(nums, target - nums[n], n, res,cur);
            cur.pop_back();
        }
        helper(nums, target, n + 1, res, cur);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        helper(candidates, target, 0, res, cur);
        return res;
    }
};