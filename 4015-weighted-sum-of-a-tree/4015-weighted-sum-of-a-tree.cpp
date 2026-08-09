class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
       int n = parent.size();
        auto malviretho = make_pair(parent, nums);
        vector<vector<int>> children(n);
        for (int i = 1; i < n; i++) {
            children[parent[i]].push_back(i);
        }
        vector<int> depth(n, 0);
        queue<int> q;

        q.push(0);
        depth[0] = 1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int child : children[node]) {
                depth[child] = depth[node] + 1;
                q.push(child);
            }
        }
        int h = 0;
        for (int d : depth) {
            h = max(h, d);
        }
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (long long)nums[i] * (h - depth[i] + 1);
        }

        return ans;  
    }
};