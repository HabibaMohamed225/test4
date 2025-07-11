class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int prev1 = 1;  // ways to reach step n - 2
        int prev2 = 2;  // ways to reach step n - 1
        int current;

        for (int step = 3; step <= n; step++) {
            current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }

        return current;
    }
};
