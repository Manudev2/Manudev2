class Solution {
public:
    int maxSum(vector<int>& nums) {
        int largest = *max_element(nums.begin(), nums.end());
        if(largest<0){
            return largest;
        }
        set<int>st;
        int ans=0;
       for(int it:nums){
        if(st.find(it)==st.end() && it>0){
            st.insert(it);
            ans+=it;
        }
      }  
      return ans;
    }
};