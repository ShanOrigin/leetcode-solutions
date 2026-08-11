class Solution {
public:
    bool isPalindrome(string s) {
        std::string str = s ;
        int i = 0 , j = str.length() - 1 ;
        bool is_palindrome = true ;
        if(str.length() == 1) return true ;
        while( i <= j ){

            char left =str[i] ;
            char right =str[j];
            
            if( (left < 'a' || left > 'z' ) && (left< '0' || left>'9') && ( left < 'A' || left > 'Z'  ) ){
                i++ ;
                continue;
            }
            if((right < 'a' || right > 'z') && (right < '0' || right > '9')&& ( right < 'A' || right > 'Z'  ) )
            {
                j--;
                continue ;
            }

            if( std::tolower(left) !=  std::tolower(right)){
                return false ;
            }
                i++ ;
                j--;
            
        }
        return is_palindrome ;
    }
};