class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        vector<pair<int,int>> p;
        
        for(int i=0;i<nums.size();i++){
            p.push_back({nums[i],cost[i]});
        }
        
        sort(p.begin(),p.end());
        long long int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=cost[i];
        }
        
        long long int median=(sum+1)/2;
        long long int target=0;
        long long int x=0;
        //finding median target
        for(int i=0;i<nums.size();i++){
            x+=p[i].second;
            if(x>=median){
                target=p[i].first;
                break;
            }
        }
        long long int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=abs((nums[i]-target)*cost[i]);
        }
        
        return ans;
        
        
        
        
        
    }
};