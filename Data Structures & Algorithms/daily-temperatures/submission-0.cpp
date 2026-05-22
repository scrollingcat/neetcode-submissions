class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            int j;
            for (j = i; j < n; j++)
            {
                if (temperatures[j] > temperatures[i])
                {
                    res.push_back(x);
                    break;
                }
                x += 1;
            }
            if (j == n) res.push_back(0);
        }   
        return res;
    }
};
