class Solution {
public:
    int maxArea(int h, int w, vector<int>& hor, vector<int>& ver) {
        sort(hor.begin(),hor.end());
        sort(ver.begin(),ver.end());
        long long int hdiff=hor[0],vdiff=ver[0];
        //diff from 0 and last
        const unsigned int M = 1000000007;
        for(int i=1;i<hor.size();i++){
            if((hor[i]-hor[i-1])>hdiff) hdiff=abs(hor[i]-hor[i-1]);    
        }
        
        for(int i=1;i<ver.size();i++){
            if((ver[i]-ver[i-1])>vdiff) vdiff=abs(ver[i]-ver[i-1]);
            }
        
        if(w-ver[ver.size()-1]>vdiff) vdiff=w-ver[ver.size()-1];
        //or instead of this u can do push_back to last cut or h or w so ver.push_back(v) at starting so not write this
        if(h-hor[hor.size()-1]>hdiff) hdiff=h-hor[hor.size()-1];
        
       long long int x= (hdiff * vdiff) %M; 
        return x;
    }
};
    
    