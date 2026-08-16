class Solution {
public:
    int reverse(int x) {
        
        long long res = 0 ;
        while( x != 0 ){
            int r = x % 10 ; 
            res = res * 10 + r ; 
            x /= 10 ;
        }

        if (res > INT32_MAX || res < INT32_MIN) {
            return 0;
        }
        return res ; 
    }
};