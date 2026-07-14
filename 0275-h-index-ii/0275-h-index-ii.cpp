class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(citations[mid]==n-mid){
                return n-mid;
            }
            if(citations[mid]<n-mid){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return n-st;
    }
};