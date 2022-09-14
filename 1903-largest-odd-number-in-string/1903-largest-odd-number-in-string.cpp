class Solution {
public:
    string largestOddNumber(string num) {
        while(num.length()){
           // char ch = num[num.size()-1];
            int x=int(num[num.size()-1]);
            if(x%2==0){
                num.erase(num.end()-1);
            }
            else return num;
        }
        return num;
    }
};
