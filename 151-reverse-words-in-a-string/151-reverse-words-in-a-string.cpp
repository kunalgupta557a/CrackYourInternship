class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string ans;
        bool more=false;
        for(int i=s.size()-1;i>=0;i--){
           //space
            if(s[i]==' ' && temp==""){  //mistake 1
                continue;
            } 
            //space
            if(s[i]==' ' && temp!=""){
                reverse(temp.begin(),temp.end());
                
                if(ans==""){
                    ans=temp;
                    temp.clear();
                    continue;
                }
                
                else{
                    ans=ans+" "+temp;
                    more=true;
                    temp.clear();
                    continue;
                }
                
            }
            
            temp.push_back(s[i]);
        }
        
        if(temp!=""){
        reverse(temp.begin(),temp.end());
        if(more) ans=ans+" "+temp;
        else ans=temp;
        }
        
        return ans;
    }
};