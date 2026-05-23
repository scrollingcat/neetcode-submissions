class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        int i = 0;
        int j = 1;
        while (j < n && i < n)
        {
            if (nums[j] == nums[i])
            {
                j++;
                continue;
            }
            else
            {
                nums[i + 1] = nums[j];
                i++;
                res += 1;
            }
        }
        return res + 1;
    }
};