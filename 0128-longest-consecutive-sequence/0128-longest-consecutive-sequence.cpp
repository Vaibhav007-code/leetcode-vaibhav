class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> s (nums.begin() , nums.end());
        int longest = 0;

        for (int i : s){
            if (s.find(i-1) == s.end()){
               int length = 1;
               int current  = i;

              while(s.find(current+1)!= s.end()){
              current++;
              length++;

              }
              
              longest = max(longest , length);
        }
        }
      
        return longest;


    }
};