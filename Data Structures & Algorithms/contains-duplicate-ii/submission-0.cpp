class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mm;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (mm.find(nums[i]) == mm.end())
            {
                mm[nums[i]] = i;
            }
            else
            {
                int prev = mm[nums[i]];
                if (i - prev <= k)
                {
                    return true;
                }
                else
                {
                    mm[nums[i]] = i;
                }
            }
        }
        return false;
    }
};