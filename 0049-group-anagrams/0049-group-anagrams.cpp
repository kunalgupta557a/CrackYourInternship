class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        if(strs.size()<2) { ans.push_back(strs);
                          return ans;}
        vector<string> s(strs.begin(),strs.end());
        for(int i=0;i<strs.size();i++){
            sort(strs[i].begin(),strs[i].end());
        }
        map<int,bool> m;
        
        for(int i=0;i<strs.size()-1;i++){
            vector<string> level;
            if(m[i]==true) continue;
            else {level.push_back(s[i]);
                 m[i]=true;}
            
            for(int j=i+1;j<strs.size();j++){
                if(strs[i]==strs[j] && m[j]==false){
                    m[j]=true;
                    level.push_back(s[j]);
                }
            }
            ans.push_back(level);
        }
        vector<string> level;
        if(m[strs.size()-1]==false) {level.push_back(s[strs.size()-1]);
        ans.push_back(level);}
        
        return ans;
    }
};