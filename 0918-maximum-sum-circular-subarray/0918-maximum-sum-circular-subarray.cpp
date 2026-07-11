class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curmax=0;
        int maxsum=INT_MIN;
        int curmin=0;
        int minsum=INT_MAX;
        int total=0;
        for(int it:nums){
            curmax=max(it,curmax+it);
            maxsum=max(curmax,maxsum);
            curmin=min(it,curmin+it);
            minsum=min(minsum,curmin);
            total+=it;
        }
        if(maxsum<0){
            return maxsum;
        }
        return max(maxsum,total-minsum);
    }
};