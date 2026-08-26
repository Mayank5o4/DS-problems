class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int i = 1, j = 0;
        while (i <= k) {
            j = (j * 10 + 1) % k;
            if (j == 0) {
                return i;
            }
            i++;
        }
        if (k % 2 == 0 || k % 5 == 0) {
            return -1;
        }
        return -1;
    }
};