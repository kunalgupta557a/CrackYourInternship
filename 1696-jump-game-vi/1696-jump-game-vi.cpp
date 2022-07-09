class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
	vector<int> dp(size(nums), INT_MIN);
    multiset<int> s ({ dp[0] = nums[0] });         // set dp[0] = nums[0] and insert it into set
	for(int i = 1; i < size(nums); i++) {
        if(i > k) s.erase(s.find(dp[i - k - 1]));  // erase elements from which we cant jump to current index
        s.insert(dp[i] = *rbegin(s) + nums[i]);    // choose element with max score and jump from that to the current index
    }
	return dp.back();
}
   /* int maxResult(vector<int>& nums, int k) {
        int len = nums.size();
        if(len==1) return nums[0];
        
        int window_sum=0,max_sum=nums[0];
        int temp_sum=0;
        int count=0;
        for(int i=1;i<len;i++){
            if((i-1)%k==0) window_sum=+nums[i],++count;
            else{
                window_sum=+nums[i]-nums[i-1];
                ++count;
            }
            
            window_sum=max(window_sum,temp_sum);
            temp_sum=window_sum;
            
            
            
            
            if(count%k==0) max_sum = (max_sum+window_sum),window_sum=0,cout<<max_sum;
        }
        return max_sum;
        */
    
};