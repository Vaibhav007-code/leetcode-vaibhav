class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        transform(s.begin() , s.end() , s.begin(),towlower);
        transform(t.begin() , t.end() , t.begin(),towlower);

        sort(s.begin() , s.end());
        sort(t.begin(), t.end());

        for (int i = 0 ; i < s.size();i++){
            for(int j = 0 ; j < t.size();j++){
                if(s[i] != t[i]) return false;
            }
           
        }
        return true;

    }
};