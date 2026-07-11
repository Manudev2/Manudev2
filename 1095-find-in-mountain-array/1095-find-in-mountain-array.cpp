/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation.
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    
    // Binary Search Function
    int binarySearch(MountainArray &mountainArr, int target,
                     int left, int right, bool isAscending) {

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int val = mountainArr.get(mid);

            if (val == target)
                return mid;

            if (isAscending) {
                if (val < target)
                    left = mid + 1;
                else
                    right = mid - 1;
            } 
            else {
                if (val < target)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }

        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {

        int n = mountainArr.length();

        // Step 1: Find Peak
        int left = 0;
        int right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (mountainArr.get(mid) < mountainArr.get(mid + 1))
                left = mid + 1;
            else
                right = mid;
        }

        int peak = left;

        // Step 2: Search in Left (Increasing)
        int ans = binarySearch(mountainArr, target, 0, peak, true);

        if (ans != -1)
            return ans;

        // Step 3: Search in Right (Decreasing)
        return binarySearch(mountainArr, target, peak + 1, n - 1, false);
    }
};