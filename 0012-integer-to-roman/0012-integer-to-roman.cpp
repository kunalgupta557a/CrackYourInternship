class Solution {
public:
    string intToRoman(int num) {
    string ans = "";
    int val[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    
    for(int i=12;i>=0;i--){
        int div=num/val[i];
        while(div--){
            ans+=sym[i];
        }
        num=num%val[i];
    }
        return ans;
        
    }
};
