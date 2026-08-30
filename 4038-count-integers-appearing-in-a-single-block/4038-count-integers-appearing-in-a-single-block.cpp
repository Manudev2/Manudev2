class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(i==0 || nums[i]!=nums[i-1]){
                mp[nums[i]]++;
            }
        }
        int count=0;
        for(auto it:mp){
            if(it.second==1){
                count++;
            }
        }
        return count;
    }
};