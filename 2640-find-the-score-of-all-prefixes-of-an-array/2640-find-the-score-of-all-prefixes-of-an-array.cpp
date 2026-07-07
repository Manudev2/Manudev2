class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n);
         int mx = nums[0];
       
        ans[0]=nums[0]+nums[0];
        for(int i=1;i<n;i++){
            mx=max(nums[i],mx);
            long long sum=nums[i]+mx;
            ans[i]=ans[i-1]+sum;

        }
        return ans;
    }
};