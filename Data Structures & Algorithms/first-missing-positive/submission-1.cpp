class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans = 1;
        unordered_set<int> S;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] <= 0) continue;
            S.insert(nums[i]);
            if (nums[i] == ans)
            {
                while (S.find(++ans) != S.end());
            }
        }
        return ans;
    }
};