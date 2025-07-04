class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int > freq;
        for (int num : nums){
            freq[num]++;

        }
        int max_freq = 0;
        for (auto pair:freq){
            max_freq = max(max_freq , pair.second);

        }

        int total = 0;
        for (int num : nums){
            if (freq[num] == max_freq){
                total++;
            }
        }
        return total;
        
    }
};