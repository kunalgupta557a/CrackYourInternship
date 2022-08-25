class Solution {
public:
    bool canConstruct(string ra, string mag) {
        unordered_map<char,int> m;
        for(int i=0;i<mag.size();i++){
            m[mag[i]]++;
        }
        for(int i=0;i<ra.size();i++){
            if(m[ra[i]]==0) return false;
            else m[ra[i]]--;
        }
        return true;
    }
};
/*





*/