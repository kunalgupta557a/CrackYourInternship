class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        set<int> rows,col;
        for(int i=0;i<m;i++){
            for(int z=0;z<n;z++){
               if(nums[i][z]==0){
                   rows.insert(z);
                   col.insert(i);
               } 
            }
        }
        
        for(auto itr:rows){
            for(int i=0;i<m;i++){
                nums[i][itr]=0;
            }
        }
        for(auto itr:col){
            for(int i=0;i<n;i++){
                nums[itr][i]=0;
            }
        }
        
        
    }
};