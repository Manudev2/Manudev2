class Solution {
public:
    int findNthDigit(int n) {

        long long digits = 1;
        long long count = 9;
        long long start = 1;

        // Find the block
        while (n > digits * count) {
            n -= digits * count;
            digits++;
            count *= 10;
            start *= 10;
        }

        // Find the number
        start += (n - 1) / digits;

        // Convert to string
        string s = to_string(start);

        // Find the digit
        return s[(n - 1) % digits] - '0';
    }
};