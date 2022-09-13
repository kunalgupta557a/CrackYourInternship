class Solution {
public:
    string reverseWords(string s) {
        
    //trim trailing and ending 0
       while(s[0]==' ') s.erase(s.begin());
        while(s[s.size()-1]==' ') s.erase(s.end()-1); // this erase last element not s.erase()-1;
        
        reverse(s.begin(),s.end());
        int beg=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(s[i+1]==' '){
                    s.erase(s.begin()+i+1); //remove all multiple spaces first
                    i--;
                   continue;}
                reverse(s.begin()+beg,s.begin()+i); // mistake here as s.begin()+i-1
                beg=i+1;
            }   
            if(i==s.size()-1) reverse(s.begin()+beg,s.end());
        }
        
       return s; 
    }
};

//stack
//old code
/*
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
*/