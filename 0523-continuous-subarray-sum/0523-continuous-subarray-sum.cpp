class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int> m{{0,0}}; // inserting 0,0 is important
        int sum=0;
       
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(!m.count(sum%k)) m[sum%k]=i+1; 
            else{
                if(m[sum%k]<i) return true;
            }
            
        }
        return false;
        
    }
};