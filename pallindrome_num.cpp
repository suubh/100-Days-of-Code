class Solution {
public:
    int revfun(int x){
        long temp=0;
        while(x){
            int r = x%10 + temp*10;
            if(r/10 != temp){
                return 0;
            }
            temp = r;
            x=x/10;
        }
        return temp;
    }
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int rev = revfun(x);
        if(x == rev){
            return true;
        }
        else {
            return false;
        }
        
    }
};