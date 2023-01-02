class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap=0,low=0;
        
        for(int i=0;i<word.size();i++){
            int x=int(word[i]);
            if(97<=x && x<=122) low++;
            else cap++;
        }
        int s=word.size();
        int x=int(word[0]);
        if(cap==s) return true;
        if(low==s) return true;
        if(cap==1 && x<97) return true;
        return false;
    }
};