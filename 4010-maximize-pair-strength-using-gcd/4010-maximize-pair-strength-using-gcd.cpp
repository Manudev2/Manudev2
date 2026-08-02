class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans = LLONG_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long g=gcd(nums[i],nums[j]);
                g=g*g;
                ans=max(ans,(1LL*nums[i]*nums[j])/g);
            }
        }
        return ans;
    }
};