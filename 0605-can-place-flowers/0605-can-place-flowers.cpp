class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int maxflower=0;
        int i=0;
        
        if(flowerbed.size()==1 && flowerbed[i]==0 && (n==1||n==0)) return true;
           
        for(i=0;i<flowerbed.size();i++){
            
            if(flowerbed[i]==0){
           
                if(i!=0 && i!=flowerbed.size()-1){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0) {
                    maxflower++;
                    flowerbed[i]=1;}}
            
                else{
                if(i==0 && flowerbed[i+1]==0) {
                    maxflower++;
                    flowerbed[i]=1;
                }
                if(i==flowerbed.size()-1 && flowerbed[i-1]==0) {    
                    maxflower++;
                    flowerbed[i]=1;
                }
            }
            
            }
        
        }
        
        
        //cout<<n<<" "<<maxflower<<endl;
        if(n <= maxflower) return true;
        return false;
    }
};