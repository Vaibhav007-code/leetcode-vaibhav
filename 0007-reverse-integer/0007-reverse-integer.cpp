class Solution {
public:
    int reverse(int x) {
        long long int lastdigit = 0;
          long long int rev = 0;
        
        while(x != 0){
              
         lastdigit = x % 10;
            rev  = rev*10+lastdigit;
           x = x/10;


        }
        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }

        return (int) rev;

       

    }
    
};