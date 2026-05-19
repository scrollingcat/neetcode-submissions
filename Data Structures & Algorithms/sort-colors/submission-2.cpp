class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int two = n - 1;
        int one = 0;
        while (one <= two)
        {
            if (nums[one] == 2)
            {
                swap(nums[two], nums[one]);
                two--;
            }
            else if (nums[one] == 0)
            {
                swap(nums[zero], nums[one]);
                zero++;
                one++;
            }
            else
            {
                one++;
            }
        }
    }
};