class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s1;
        int res;
        for (int i = 0; i < n; i++)
        {
            if (s1.find(nums[i]) != s1.end())
            {
                return nums[i];
            }
            s1.insert(nums[i]);
        }
        return res;
    }
};
