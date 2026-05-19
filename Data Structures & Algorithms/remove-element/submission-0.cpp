class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t n = nums.size();
        int z = n;
        int qty = 0;
        int i = 0;
        while (i < n)
        {
            if (nums[i] == val)
            {
                qty++;
                int j = i + 1;
                while (j < n)
                {
                    nums[j - 1] = nums[j];
                    j++;
                }
                n--;
                for (int k = 0; k < n; k++)
                {
                    cout << nums[k] << '\t';
                }
                cout << '\n';

            }
            else
            {
                i++;
            }
        }
        return z - qty;
    }
};