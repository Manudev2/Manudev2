class Solution {
public:
    int largestInteger(vector<int>& arr, int k) {
        int n=arr.size();
       
        if(k==arr.size()){
            return *max_element(arr.begin(), arr.end());
        }
        map<int,int>mp;
        for(int i=0;i<=n-k;i++){
          set<int>st;
          for(int j=i;j<i+k;j++){
            st.insert(arr[j]);
          }
          for(int it:st){
            mp[it]++;
          }
        }
        int ans=-1;
        for(auto it:mp){
            if(it.second==1){
                ans=max(it.first,ans);
            }
        }
        return ans;
    }
};