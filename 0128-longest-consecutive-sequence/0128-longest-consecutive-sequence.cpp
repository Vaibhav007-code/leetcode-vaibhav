class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin() , nums.end());
    
        int longest  = 1;
        int crnt = 1;
        int last_smaller = INT_MIN;
        for (int i = 0 ; i <nums.size();i++){
            if (nums[i] -1 == last_smaller){
                crnt = crnt+1;
                last_smaller = nums[i];

            }else if(nums[i]==last_smaller){
                continue;

            }else{
                longest = max(longest,crnt);
                crnt = 1;
                last_smaller = nums[i];

            }
            
         
            
            
        }
         longest = max(longest,crnt);
        return longest;

        
    }
    
};