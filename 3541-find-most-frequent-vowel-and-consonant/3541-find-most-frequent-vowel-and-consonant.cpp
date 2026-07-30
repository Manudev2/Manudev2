class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mpc;
        map<char,int>mpv;
        for(char it:s){
            if (string("aeiouAEIOU").find(it) != string::npos) {
             mpv[it]++;
            }
            else{
                mpc[it]++;
            }
        }
        int maxc=0;
        int maxv=0;
        for(auto it:mpc){
            maxc=max(maxc,it.second);
        }
        for(auto it:mpv){
            maxv=max(maxv,it.second);
        }
        return maxc+maxv;
    }
};