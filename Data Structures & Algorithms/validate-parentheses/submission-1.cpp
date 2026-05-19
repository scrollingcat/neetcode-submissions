class Solution {
public:
    bool isValid(string s) {
        vector<char> brackets;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (brackets.size() == 0 && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
            return false;
            if (s[i] == ')' && *(brackets.end() - 1) == '(')
            {
                brackets.pop_back();
            }
            else if (s[i] == ']' && *(brackets.end() - 1) == '[')
            {
                brackets.pop_back();
            }
            else if (s[i] == '}' && *(brackets.end() - 1) == '{')
            {
                brackets.pop_back();
            }
            else
            {
                brackets.push_back(s[i]);
            }

        }
        if (brackets.size() == 0) return true;
        return false;
    }
};
