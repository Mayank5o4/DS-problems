class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, prod = 1;
        int num = n;
        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            prod *= digit;
            n /= 10;
        }
        int total = sum + prod;
        if (num % total == 0) {
            return true;
        }
        return false;
    }
};