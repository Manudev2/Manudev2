class Solution {
public:
    int customBinarySearch(vector<vector<int>>& items, int queryPrice) {
        int l = 0;
        int r = items.size() - 1;
        int maxBeauty = 0;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (items[mid][0] > queryPrice) {
                r = mid - 1;
            } else {
                maxBeauty = max(maxBeauty, items[mid][1]);
                l = mid + 1;
            }
        }

        return maxBeauty;
    }

    vector<int> maximumBeauty(vector<vector<int>>& items,
                              vector<int>& queries) {

        int n = items.size();
        int m = queries.size();

        vector<int> result(m);

        // Step 1: Sort by price
        sort(items.begin(), items.end());

        // Step 2: Prefix maximum beauty
        int maxBeautySeen = items[0][1];
        for (int i = 1; i < n; i++) {
            maxBeautySeen = max(maxBeautySeen, items[i][1]);
            items[i][1] = maxBeautySeen;
        }

        // Step 3: Answer each query using binary search
        for (int i = 0; i < m; i++) {
            result[i] = customBinarySearch(items, queries[i]);
        }

        return result;
    }
};