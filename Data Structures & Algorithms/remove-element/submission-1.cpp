class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t n = nums.size();
        int z = n;
        int qty = 0;
        int i = 0;
        int j = 0;
        while (i < n)
        {
            if (nums[i] != val)
            {
                qty++;
                nums[j] = nums[i];
                j++;
                i++;
            }
            else
            {
                i++;
            }
        }
        return qty;
    }
};