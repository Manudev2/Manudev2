class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            int dig=n%10;
            mp[dig]++;
            n/=10;
        }
        int ans = -1;
        int mnFreq = INT_MAX;
        for(auto it:mp){
            if(it.second<mnFreq){
                mnFreq=it.second;
                ans=it.first;
            }
            else if(it.second==mnFreq){
                ans=min(ans,it.first);
            }
        }
        return ans;
    }
};