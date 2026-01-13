class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positives;
        vector<int>negatives;
        vector<int>newArr; 

        for (int i = 0 ; i < nums.size(); i++){
            if(nums[i] >0 ){
                positives.push_back(nums[i]);
            }else {
                     negatives.push_back(nums[i]);
            }
            

        }
         for (int j = 0 ; j < positives.size();j++){
                newArr.push_back(positives[j]);
                newArr.push_back(negatives[j]);
            }
        return newArr;
        
    }
};