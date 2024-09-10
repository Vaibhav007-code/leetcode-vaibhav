class Solution {
public:
    int divide(int dividend, int divisor) {
        // check and return if both are equal
        if(dividend==divisor) return 1;
        // to mark whether the answer will be negative or positive
        int sign=1;
        unsigned int ans=0; 
        // Taking the absolute values in consideration 
        if( (dividend>0 && divisor<0) || (dividend<0 && divisor>0) ) 
                sign=-1;
        
        unsigned int n=abs(dividend); unsigned int d=abs(divisor);
        
        // Using bit manipulation principles for divison
        while(n>=d){
            int cnt=0;
            while(n>(d<<(cnt+1))){  //Taking the value closet to the value of n 
                                   //Doing so by d<<(cnt+1) we mean to multiply it by 2
                cnt++;}           //How many times shfting occured
            n=n-(d<<cnt);          //Calculating the remaining part of divisor
            ans=ans+(1<<cnt);      // Calculating the quotient
        }

        if(ans==(1<<31) && sign==1) return INT_MAX;
        // if(ans==INT_MAX && sign==-1) return INT_MIN;
        return sign*ans;
    }
};