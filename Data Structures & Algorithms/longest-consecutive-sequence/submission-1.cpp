class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            s1.insert(nums[i]);
        }
        int maxx = 0;
        for (int i = 0; i < n; i++)
        {
            int x = 1;
            int y = nums[i] + 1;
            while (s1.find(y) != s1.end())
            {
                x++;
                y++;
            }
            if (x > maxx) maxx = x;
        }
        return maxx;

        
    }
};
