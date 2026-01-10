class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n  = nums.size();
        if (n == 0 ) return 0;
        int minprice = nums[0];
        int maxprofit = 0 ;
        for (int i = 0 ; i < n ; i ++){
            int profit = nums[i]-minprice;
            if (profit > maxprofit) maxprofit = profit ;

            if (nums[i]<minprice) minprice = nums[i];

            
           
          
        }
        return maxprofit;
    }
};