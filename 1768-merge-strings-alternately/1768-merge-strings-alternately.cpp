class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size;
        if(word1.size() > word2.size()) size=word2.size();
        else size=word1.size();
        string word3;
        int i;
        
        for( i = 0 ;i < size; i++){
            word3 += word1[i];
            word3 += word2[i];
        }
        
        if(i < word1.size()){
            for(int j=i;j<word1.size();j++){
                word3+=word1[j];            
            }
            
        }
        
        if(i < word2.size()){
            for(int j=i;j<word2.size();j++){
                word3+=word2[j];            
            }
            
        }
        
        return word3;
    }
};