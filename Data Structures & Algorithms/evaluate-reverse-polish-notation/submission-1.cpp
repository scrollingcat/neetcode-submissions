class Solution {
public:
    bool isNumeric(std::string &x)
    {
        int n = x.size();
        if (x[0] == '-' && n == 1) return false;
        for (char c : x)
        {
            if (!isdigit(c))
                {if (!(c == '-'))return false;}
        }
        return true;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s1;
        for (auto &i : tokens)
        {
            
            if (isNumeric(i))
            {
                s1.push(stoi(i));
            }
            else
            {
                int a = s1.top();
                s1.pop();
                int b = s1.top();
                s1.pop();
                if(i == "+")
                {
                    s1.push(b + a);
                }
                else if(i == "-")
                {
                    s1.push(b - a);
                }
                else if(i == "*")
                {
                    s1.push(b * a);
                }
                else if(i == "/")
                {
                    s1.push(b / a);
                }
            }
        }
        return s1.top();
    }
};
