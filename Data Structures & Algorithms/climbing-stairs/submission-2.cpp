class Solution {
public:
    int fastClimbStairs(int n, unordered_map<int, int>& memo)
    {
        if (n == 0) return 1;
        if (n == 1) return 1;
        if (memo.find(n) != memo.end()) return memo[n];
        memo[n] = fastClimbStairs(n - 1, memo) + fastClimbStairs(n - 2, memo);
        return memo[n];
    }
    


    int climbStairs(int n) {
        unordered_map<int, int> memo;
        return fastClimbStairs(n, memo);
    }
};
