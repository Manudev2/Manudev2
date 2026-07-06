class Solution {
public:
    long long countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        long long count = 0;

        while (left < right) {
            if (nums[left] + nums[right] <= target) {
                // All pairs (left, left+1 ... right) are valid
                count += (right - left);
                left++;
            } else {
                right--;
            }
        }

        return count;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());

        return countPairs(nums, upper) - countPairs(nums, lower - 1);
    }
};