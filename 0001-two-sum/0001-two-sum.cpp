class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //declare an umordered map
        unordered_map <int ,int>mp;

        //run a loop till the end of the array , nums.end()
        for (int i = 0  ; i < nums.size();i++){

            //create a variable to store the missing value which when added make total= target
            //eg = target = 7 , nums[i] = 2 , miss = ?
            // to find miss  we do , miss = target-nums[i] which is  = 5
            int com = target - nums[i];

            if (mp.count(com)){
                return {mp[com], i };

            }
            mp[nums[i]] = i ;
        }

        return {};
        
    }
};