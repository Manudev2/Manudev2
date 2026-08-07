class Solution {
public:
    int smallestNumber(int n, int t) {
       while (true) {
            int num = n;
            int prod = 1;
            bool hasZero = false;

            // find product of digits
            while (num > 0) {
                int d = num % 10;
                if (d == 0) {
                    hasZero = true;
                    break;
                }
                prod *= d;
                num /= 10;
            }

            // check condition
            if (hasZero || prod % t == 0) {
                return n;
            }

            n++; // try next number
        }
    }
};