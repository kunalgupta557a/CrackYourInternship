class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return(n==1 || (n%2==0 && isPowerOfTwo(n/2)));
    }
};
/*

if(n>0 && (n&(n-1))==0) return true;
        return false;

*/