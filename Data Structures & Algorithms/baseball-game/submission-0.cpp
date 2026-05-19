class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score_stack;
        int top = -1;
        int n = operations.size();
        for (int i = 0; i < n; i++)
        {
            if (operations[i] == "+")
            {
                int y = score_stack[top] + score_stack[top - 1];
                score_stack.push_back(y);
                top++;
            }
            else if(operations[i] == "D")
            {
                int y = 2 * score_stack[top];
                score_stack.push_back(y);
                top++;
            }
            else if(operations[i] == "C")
            {
                score_stack.pop_back();
                top--;
            }
            else
            {
                score_stack.push_back(stoi(operations[i]));
                top++;
            }
        }
        int final_score = 0;
        for (int i = 0; i <= top; i++)
        {
            final_score += score_stack[i];
        }
        return final_score;
    }
};