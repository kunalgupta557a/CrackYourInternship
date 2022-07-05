class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end()); // this is faster
        
        // for(int i = 0; i<nums.size(); i++)
        // {
        //     s.insert(nums[i]);
        // }
        
        int longest_sequence = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i] - 1)!=s.end())
                continue;
            
            else
            {
                int count = 0;
                int current_element = nums[i];
                
                while(s.find(current_element) != s.end())
                {
                    count++;
                    current_element++;
                }
                
                longest_sequence = max(longest_sequence,count);
            }
        }
        
        return longest_sequence;
    }
};
/*
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,bool> m;
        for(int i=0;i<nums.size();i++){
            if(std::count(nums.begin(), nums.end(), nums[i]+1)){
               m[nums[i]]=false;
            }
        }
        int longestcount=0;
       
        for(int i=0;i<m.size();i++){
            int count=1;
            int currentnum=m[i];
            if(m[i]==false){
                while(m.find(currentnum+1) != m.end()){
                    currentnum+=1;
                    count+=1;
                    m[currentnum]=true;
                }
            }
            longestcount=max(longestcount,count);
        }
        return longestcount;
    }
};
*/