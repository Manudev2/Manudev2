class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int, int> mp;

        for (int x : nums)
            mp[x]++;

        int ans = 0;

        for (int x : nums) {
            if (mp.count(x - diff) && mp.count(x + diff))
                ans++;
        }

        return ans;
    }
};