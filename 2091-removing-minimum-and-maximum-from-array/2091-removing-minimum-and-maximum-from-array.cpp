class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int n=nums.size();
       int min_ele=INT_MAX;
       int max_ele=INT_MIN;
       int idx = -1;
       int idxm = -1;
       for(int i=0;i<n;i++){
        if(nums[i]>max_ele){
            max_ele=nums[i];
            idxm=i;
        }
        if(nums[i]<min_ele){
            min_ele=nums[i];
            idx=i;
        }
       } 
       int frt = max(idx, idxm) + 1;
        int bck = n - min(idx, idxm);
        int both = min(idx, idxm) + 1 + n - max(idx, idxm);
       return min({frt,both,bck});
    }
};