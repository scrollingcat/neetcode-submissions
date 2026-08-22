class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2, -1);
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j)
        {
            int cur_sum = numbers[i] + numbers[j];
            if (cur_sum == target)
            {
                res[0] = i + 1;
                res[1] = j + 1;
                break;
            }
            else if (cur_sum < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return res;
    }
};
