class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        int n = bills.size();
        for (int i = 0; i < n; i++)
        {
            if (bills[i] == 5)
            {
                five++;
            }
            else if(bills[i] == 10)
            {
                if (five < 1) return false;
                ten++;
                five--;
            }
            else
            {
                if (ten > 0 && five > 0)
                {
                    five--;
                    ten--;
                }
                else if(five > 2)
                {
                    five -= 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};