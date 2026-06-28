class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n =nums.size();
        long long ans=0;
        sort(nums.begin(),nums.end(), greater<int>());
        for(int i=0;i<k;i++){
                long long fac=max(1,mul);
                ans+=1LL *nums[i]*fac;

                mul--;    
        }
        return ans;
    }
};