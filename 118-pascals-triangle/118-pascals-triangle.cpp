class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> ans;
        vector<int> level;
        int x=0;
        while(x<num){
        for(int i=x-1;i>0;i--){
            
            level[i]=level[i]+level[i-1];
        }   
            x++;
            level.push_back(1);
            ans.push_back(level);
        }
        return ans;
    }
};