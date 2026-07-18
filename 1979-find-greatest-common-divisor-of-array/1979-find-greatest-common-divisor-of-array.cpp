class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            mn=min(mn,nums[i]);
        }
        return gcd(mn,mx);
    }
};