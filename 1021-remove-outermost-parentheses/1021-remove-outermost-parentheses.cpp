class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        int beg=0;
        for(int i=0;i<s.size();i++){
            if(s[i]== '(') ++open;
            
            if(s[i]==')')  --open;
            
            if(open==0){
                s.erase(s.begin()+i);
                s.erase(s.begin()+beg);
                beg=i-1;
                i=i-2;
            }
            
        }
        
        return s;
        
    }
};
//   ( () () ) (    int open 4
//   1 21 21 0
//   ( () (()) )
//   1 21 2321 0