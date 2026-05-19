class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        vector<int> ans(2);
        while (i < j)
        {
            int s = numbers[i] + numbers[j];
            if (s == target)
            {
                ans[0] = i + 1;
                ans[1] = j + 1;
                break;
            }
            else if (s < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};
