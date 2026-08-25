class Solution {
public:

    void helper(vector<int>nums, vector<vector<int>>&res, int ind)
    {
        if (ind == nums.size())
        {
            res.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++)
        {
            swap(nums[ind], nums[i]); 
            helper(nums, res, ind + 1);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        helper(nums, res, 0);
        return res;
    }
};