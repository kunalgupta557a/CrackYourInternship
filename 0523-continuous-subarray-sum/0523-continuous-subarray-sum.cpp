class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int> m{{0,0}}; // inserting 0,0 is important as remainder becomes 0 at starting then also maybe we found ans so to repeat the remainder we need this
        int sum=0;
       //use of remainder property
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            if(!m.count(sum%k)) m[sum%k]=i+1; 
            else{
                if(m[sum%k]<i) return true;
            }
            //using i and i+1 to know atleast two element in between come
        }
        return false;
        
    }
};