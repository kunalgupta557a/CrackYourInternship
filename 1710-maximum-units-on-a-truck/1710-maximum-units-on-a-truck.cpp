

//https://www.geeksforgeeks.org/sorting-2d-vector-in-c-set-1-by-row-and-column/
class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] > v2[1];    // > this is neccasary here.
        // v1[1] & v2[1] are elements of 2 coloumn 
        // we are returning v1[1] only if its greater than v2[1] so that how it get sorted
}
  //sortcol wont work if it isn't static
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),sortcol); // 3 parameter suggest how is the array sorted
        int ans=0;
        for(auto box : boxTypes){
            int x= min(box[0],truckSize);
            ans+=(x*box[1]);
            truckSize-=x;
            if(!truckSize) break;
        }
        return ans;
    }
};


