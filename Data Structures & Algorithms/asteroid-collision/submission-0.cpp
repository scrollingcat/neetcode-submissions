class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s1;
        int n = asteroids.size();
        for (int i = 0; i < n; i++)
        {
            int curr = asteroids[i];
            if (s1.empty()) s1.push(curr);
            else
            {
                bool flag = true;
                while (!s1.empty() && s1.top() > 0 && curr < 0)
                {
                    if (abs(curr) > s1.top())
                    {
                        s1.pop();
                    }
                    else if (abs(curr) == s1.top())
                    {
                        flag = false;
                        s1.pop();
                        break;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag) s1.push(curr);

            }
        }
        vector<int> res;
        while(!s1.empty())
        {
            res.push_back(s1.top());
            s1.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};