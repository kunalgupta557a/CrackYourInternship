class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best=INT_MIN,sum=0;
        for(int i=0;i<nums.size();i++){
            sum=max(nums[i],sum+nums[i]);
            best=max(best,sum);
        }
    return best;
    }
    //it will work for negetive no as default value of best is int min
};