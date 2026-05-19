class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1;
        int zero = 0;
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0) mul *= nums[i];
            else
            {
                zero += 1;
                if (zero > 1) break;
            }
        }
        if (zero > 1)
        {
            for (int i = 0; i < n; i++)
            {
                ans[i] = 0;
            }
        }
        else if (zero == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    ans[i] = mul;
                }
                else
                {
                    ans[i] = 0;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ans[i] = mul / nums[i];
            }
        }
        return ans;
    }
};
