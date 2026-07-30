class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        long long sum=0;
        set<int>st;
        int n=nums.size();
        for(int it:nums){
            sum+=it;
            st.insert(it);
        }
        int start = max(1LL, sum / n + 1LL);
        int ans=-1;
        for(int i=start;;i++){
            if(st.find(i)==st.end()){
                ans=i;
                break;
            }
        }
        return ans;
    }
};