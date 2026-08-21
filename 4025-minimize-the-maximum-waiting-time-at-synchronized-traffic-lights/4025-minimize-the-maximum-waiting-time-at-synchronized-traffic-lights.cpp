class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxLight = 0;

        // Find maximum green duration
        for (int x : lights) {
            maxLight = max(maxLight, x);
        }
            int ans = 0;

        // Check every car
        for (int i = 0; i < arrivalTime.size(); i++) {

            int r = arrivalTime[i] % period;

            int wait;

            if (r < maxLight) {
                wait = 0;
            } else {
                wait = period - r;
            }

            ans = max(ans, wait);
        }
        return ans;
    }
};