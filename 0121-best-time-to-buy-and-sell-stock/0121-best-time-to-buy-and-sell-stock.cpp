class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int max_profit=0;
        int left=0,right=1;
        while(right<prices.size()){
            int profit=prices[right]-prices[left];
            max_profit=max(profit,max_profit);
            if(profit<=0) left=right;
            right++;
        }
        return max_profit;
    }
};