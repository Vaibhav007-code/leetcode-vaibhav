class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int>count;
        for(int num:nums){
            count[num]++;
            if(count[num]>nums.size()/2){
                return num;
            }
        }
        return -1;
    }
};