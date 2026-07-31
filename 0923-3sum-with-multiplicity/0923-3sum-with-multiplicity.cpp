class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
       const int MOD = 1e9 + 7;
       long long ans = 0;
       int n=arr.size();
       for(int i=0;i<n;i++){
        map<int,int>mp;
        for(int j=i+1;j<n;j++){
            int need=target-arr[i]-arr[j];
            if(mp.count(need)){
                ans = (ans + mp[need]) % MOD;
             }
                mp[arr[j]]++;
            }
       }
        return ans;
    }
};