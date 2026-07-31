class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(string it:words){
            mp[it]++;
        }
        vector<pair<string, int>> vec;
        for (auto &it : mp)
            vec.push_back(it);
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            if (a.second == b.second)
            return a.first < b.first;   
            return a.second > b.second;    
        });
        vector<string> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(vec[i].first);
        return ans;
    }
};