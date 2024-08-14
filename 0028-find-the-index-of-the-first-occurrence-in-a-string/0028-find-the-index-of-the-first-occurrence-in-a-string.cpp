class Solution {
public:
    int strStr(string haystack, string needle) {
        int helen = haystack.length();;
        int nlen = needle.length();
        if (nlen == 0) return 0;
        for (int i = 0; i<=helen-nlen;i++){
            int j;
            for ( j = 0;j<nlen;j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            }
            if (j == nlen){
                return i;
            }
        }
        return -1;
    }
};