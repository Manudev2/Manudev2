class Solution {
public:
    int minimumSum(vector<int>& nums) {
       int n=nums.size();
       vector<int> suffixMin(n);
       suffixMin[n-1] = nums[n-1];
       for(int i = n-2; i >= 0; i--) {
       suffixMin[i] = min(nums[i], suffixMin[i+1]);
       } 
       vector<int> PreMin(n);
       PreMin[0]=nums[0];
       for(int i=1;i<n;i++){
       PreMin[i]=min(PreMin[i-1],nums[i]);
       }
       int ans=INT_MAX;
       for(int i=1;i<n-1;i++){
        if(PreMin[i-1]<nums[i] && nums[i]>suffixMin[i+1]){
            ans=min(ans,nums[i]+PreMin[i-1]+suffixMin[i+1]);
        }
       }
       if(ans==INT_MAX){
        return -1;
       }
       return ans;
    } 
};