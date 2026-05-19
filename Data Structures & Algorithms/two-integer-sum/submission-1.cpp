class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t n = nums.size();
        unordered_map<int, int> s;
        vector<int> ans(2);
        for (int i = 0; i < n; i++)
        {
            s[nums[i]] = i;
        }
        for (int i = 0; i < n; i++)
        {
            int x = target - nums[i];
            if (s.find(x) != s.end())
            {
                if (i == s[x]) continue;
                ans[0] = i;
                ans[1] = s[x];
                break;
            }
        }
        return ans;

    }
};
