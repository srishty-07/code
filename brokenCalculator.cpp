// https://leetcode.com/problems/broken-calculator/
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int X = startValue;
        int Y = target ;
        int ans = 0;
        while (Y > X) {
            ans++;
            if (Y % 2 == 1)
                Y++;
            else
                Y /= 2;
        }

        return ans + X - Y;
    }
};
