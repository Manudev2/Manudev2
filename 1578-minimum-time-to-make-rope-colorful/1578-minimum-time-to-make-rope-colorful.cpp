class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int pre=0;
        int time=0;
        int n =colors.size();
        for(int i=0;i<n;i++){
            if(i>0 && colors[i]!=colors[i-1]){
                pre=0;
            }
            int curr=neededTime[i];
            time+=min(pre,curr);
            pre=max(pre,curr);
        }
        return time;
    }
};