class Solution {
public:
    void helper(vector<int>& nums, int idx, int target, vector<vector<int>>& resulting, vector<int>& cur)
    {
        if (target == 0)
        {
            resulting.push_back(cur);
            return;
        }
        for (int i = idx; i < nums.size(); i++)
        {
            if (i > idx && nums[i] == nums[i - 1]) continue;
            if (nums[i] > target) break;
            cur.push_back(nums[i]);
            helper(nums, i + 1, target - nums[i], resulting, cur);
            cur.pop_back();
        }  
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> cur;
        helper(candidates, 0, target, res, cur);
        return res;
    }
};
