class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int larg=INT_MIN;
        int sec=INT_MIN;
        for(int i=0;i<n;i++){
           if(nums[i]>larg){
            sec=larg;
            larg=nums[i];
           }
           else if(nums[i]>sec){
            sec=nums[i];
           }
           
         }
         ans=(larg-1)*(sec-1);
        
        return ans;
    }
};