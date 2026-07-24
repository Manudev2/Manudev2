class Solution {
public:
    int reverseN(int n){
        int nu=0;
        while(n>0){
        int dig=n%10;
        nu=nu*10+dig;
        n/=10;
        }
        return nu;
    }
    bool isSameAfterReversals(int num) {
        int temp=num;
        if(reverseN(reverseN(temp))==num){
            return true;
        }
        return false;
    }
};