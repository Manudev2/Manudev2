class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans=0;
        int n=capacity.size();
       vector<int> need;

for (int i = 0; i < n; i++) {
    if (capacity[i] == rocks[i])
        ans++;
    else
        need.push_back(capacity[i] - rocks[i]);
}

sort(need.begin(), need.end());

for (int x : need) {
    if (additionalRocks >= x) {
        additionalRocks -= x;
        ans++;
    } else {
        break;
    }
}
return ans;
    }
};