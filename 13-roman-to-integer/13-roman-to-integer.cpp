class Solution {
public:
    int chartoint(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
    return 0;
    }
    int romanToInt(string s) {
       int ans=0; 
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='I' && s[i+1]=='V'){
                ans+=4;
                ++i;
                continue;
            }
            if(s[i]=='I' && s[i+1]=='X'){
                ans+=9;
                ++i;
                continue;
            }
            if(s[i]=='X' && s[i+1]=='L'){
                ans+=40;
                ++i;
                continue;
            } 
            if(s[i]=='X' && s[i+1]=='C'){
                ans+=90;
                ++i;
                continue;
            } 
            if(s[i]=='C' && s[i+1]=='D'){
                ans+=400;
                ++i;
                continue;
            }
            if(s[i]=='C' && s[i+1]=='M'){
                ans+=900;
                //cout<<"exe";
                ++i;
                continue;
            }
            if(s[i]=='I' && (s[i+1]!='V' || s[i+1]!='X')){ ans+=1;
                                                         continue;}
            
            if(s[i]=='X' && (s[i+1]!='L' || s[i+1]!='C')){ ans+=10;
                                                         continue;}
            if(s[i]=='C' && (s[i+1]!='D' || s[i+1]!='M')){ ans+=100;
                                                         continue;}
            int x=chartoint(s[i]);
            ans+=x;
        }
        
        return ans;
    
    }
};