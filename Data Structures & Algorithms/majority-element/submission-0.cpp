class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        int x = n / 2;
        int count = 1;
        int curr = nums[0];
        for(int i = 1; i < n; i++)
        {
            if (nums[i] == curr)
            {
                count++;
                if (count > x)
                {
                    cout << count;
                    return curr;
                }
            }
            else
            {
                count = 1;
                curr = nums[i];
            }
        }
        return curr;
    }
};