class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        set<int> rows,col; // using set to see where we need rows and coloumns
        
//why can;t we use map instead of set bcoz then coloumn value in map would not be unique as map[i]=j; so i would be unique but not j
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