class Solution {
public:
    bool isPalindrome(string s) {
        string d = "";
        string c = s;
        for (int i = 0; i < s.size(); i++) {
            if ((c[i] >= 'a' && c[i] <= 'z') ||
                (c[i] >= 'A' && c[i] <= 'Z') ||
                (c[i] >= '0' && c[i] <= '9')) {

                if (c[i] >= 'A' && c[i] <= 'Z') {
                    d += c[i] + 32;  // Convert uppercase to lowercase
                } else {
                    d += c[i];
                }
            }
        }  // <-- this correctly closes the for loop

        string rev;
        for (int i = d.size() - 1; i >= 0; i--) {
            rev += d[i];
        }

        if (rev == d) {
            return true;
        } else {
            return false;
        }
    }
};
