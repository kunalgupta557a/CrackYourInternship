class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        int curdiff,prevdiff=0;
        for(int i=1;i<n;i++){
            curdiff=nums[i]-nums[i-1];
            
            if((curdiff>0 && prevdiff<=0) || (curdiff<0 && prevdiff>=0)){ //curdiff cant be 0
                ans++;
                prevdiff=curdiff;
            }
            
        }
        return ans;
    }
};
