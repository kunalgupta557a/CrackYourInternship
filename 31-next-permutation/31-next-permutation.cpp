class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int index1=-1;
        for(int i=a.size()-2;i>=0;i--){
                if(a[i+1]>a[i]){
                    index1=i;
                    break;
                }
        }
        
        if(index1==-1){
            reverse(a.begin(),a.end());
            return;
        }
        
        int index2=-1;
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]>a[index1]){ 
                index2=i;
                break;
                              }
        }
        swap(a[index2],a[index1]);
        
        reverse(a.begin()+index1+1,a.end());
        return ;
        
        
    }
};
/*


*/