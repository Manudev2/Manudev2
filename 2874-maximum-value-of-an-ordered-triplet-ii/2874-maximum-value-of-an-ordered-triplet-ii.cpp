class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>suf(n);
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=max(nums[i],suf[i+1]);
        }
        int left=nums[0];
        long long ans=0;
        for(int i=1;i<n-1;i++){
           long long value = (long long)(left - nums[i]) * suf[i + 1];
           ans=max(value,ans);
           left=max(left,nums[i]);
        }
        return ans;
    }
};