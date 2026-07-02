class Solution {
public:
    int mySqrt(int x) {
        if (x < 2)
            return x;

        int st = 1;
        int end = x / 2;
        int ans = 0;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            long long value = 1LL * mid * mid;

            if (value == x)
                return mid;
            else if (value < x) {
                ans = mid;
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return ans;
    }
};