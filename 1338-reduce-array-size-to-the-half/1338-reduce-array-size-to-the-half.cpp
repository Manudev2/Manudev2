class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int it:arr){
            mp[it]++;
        }
       vector<int>freq;
       for(auto &it:mp){
       freq.push_back(it.second);
       }
       sort(freq.begin(), freq.end(), greater<int>());
    
    int ans=0;
    int removed=0;
    int tar=arr.size()/2;
     for (int it : freq){
        removed+=it;
        ans++;
        if(removed>=tar){
            break;
        }
    }
    return ans;
    }

};