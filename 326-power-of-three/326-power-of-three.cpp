class Solution {
public:
    bool isPowerOfThree(int n){
        return fmod(log10(n)/log10(3),1)==0;
    }
    
};
/*another approach
//bool isPowerOfThree(int n) {
        if(n==1) return true;
        while(n!=0){
            if(n%3==0){
                n=n/3;
                if(n==1) return true;
            }
            else return false;
        }
        return false;*/
