class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t n = nums.size();
        int i = 0;
        while (i < n)
        {
            if (nums[i] == val)
            {
                nums[i] = nums[--n];
            }
            else
            {
                i++;
            }
        }
        return n;
    }
};