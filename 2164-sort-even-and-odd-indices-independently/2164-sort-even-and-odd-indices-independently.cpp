class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        vector<int> even;
        vector<int> odd;

        // Separate even and odd indexed elements
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        // Sort
        sort(even.begin(), even.end());                   // Ascending
        sort(odd.begin(), odd.end(), greater<int>());    // Descending

        // Put them back
        int e = 0, o = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0)
                nums[i] = even[e++];
            else
                nums[i] = odd[o++];
        }

        return nums;
    }
};