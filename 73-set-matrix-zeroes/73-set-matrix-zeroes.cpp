class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool iszero=false;
        bool row1=0,col1=0;
        int r=matrix.size();
        int c=matrix[0].size();
        
        for(int i=0;i<r;i++){
            if(matrix[i][0]==0) row1=1;
        }
        
        for(int i=0;i<c;i++){
            if(matrix[0][i]==0) col1=1;
        }
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                    iszero=true;
                }
            }
        }
        
        
        if(iszero){
            //row
            for(int i=1;i<r;i++){
                if(matrix[i][0]==0){
                for(int j=1;j<c;j++){
                    
                    matrix[i][j]=0;
                }}
            }
            
            for(int j=1;j<c;j++){
                if(matrix[0][j]==0){
                for(int i=1;i<r;i++){
                    matrix[i][j]=0;
                }
            }}
            
        }
           
        if(row1==1){
                for(int i=0;i<r;i++){
                    matrix[i][0]=0;
                }}
        
            if(col1==1){
                for(int j=0;j<c;j++){
                    matrix[0][j]=0;
                }
            }
        
        
        
        
    }
};

/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int m=nums.size();
        int n=nums[0].size();
        set<int> rows,col; // using set to see where we need rows and coloumns
        
//why can;t we use map instead of set bcoz then coloumn value in map would not be unique as map[i]=j; so i would be unique but not j so becoz of that there will be repeatation in making ceratin grids 0;
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
*/