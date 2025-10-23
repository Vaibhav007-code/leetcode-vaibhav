class Solution {
public:
    bool isPalindrome(string s) {
       string  d = "";
        for(int i = 0 ; i < s.size(); i++){
            if(isalnum(s[i])){
                 d += tolower(s[i]);
            }
        }
        int i = 0  ,  j = d.size()-1;
        while(i<j){
            if (d[i] !=d[j]){
                return false;
            
            }
            else{
                i++;
                j--;
            }
        }

        return true;
        
    }
};