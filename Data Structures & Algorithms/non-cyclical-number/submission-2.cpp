class Solution {
public:
    int nextdigit(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int fast = n, slow = n;
        do {
            slow = nextdigit(slow);
            fast = nextdigit(nextdigit(fast));
        } while(slow != fast);
        return slow == 1;
    } 
};