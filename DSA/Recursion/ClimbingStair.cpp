//This is a leetcode Easy Question 
//There are many way to solve this question but of the best way is by Fabonicc Series

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        int first = 1;
        int second = 2;
        int sum = 0;
        if (n > 2) {
            for (int i = 3; i <= n; i++) {
                sum = first + second;
                first = second;
                second = sum;
            }
            return sum;
        }
        return 0;
    }
};