class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> range;

        for (int it : nums) {
            int maxdig = 0;
            int mindig = 9;
            int x = it;

            while (x > 0) {
                int dig = x % 10;
                maxdig = max(maxdig, dig);
                mindig = min(mindig, dig);
                x /= 10;
            }

            range.push_back(maxdig - mindig);
        }

        int maxrange = INT_MIN;
        for (int it : range) {
            maxrange = max(maxrange, it);
        }

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (range[i] == maxrange) {
                sum += nums[i];
            }
        }

        return sum;
    }
};