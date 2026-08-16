class Solution {
public:
    int reverse(int x) {
        
        long long res = 0 ;
        while( x != 0 ){
            
            res = res * 10  + x % 10 ; 
            x /= 10 ;
        }

        if (res > INT32_MAX || res < INT32_MIN) {
            return 0;
        }
        return res ; 
    }
};