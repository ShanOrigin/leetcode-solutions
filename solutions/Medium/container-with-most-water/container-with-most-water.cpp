class Solution {
public:
    int maxArea(vector<int>& height) {
     int size = height.size();
        if( size == 1 ) return 1 ; 

        int left = 0 , right = size - 1 , max_area = 0 ;

        while( left <= right ){
            int l = height[left];
            int r = height[right];
            

            int y = std::min(l , r );
            int x = right - left ;
            int area = y * x ;
            if( area > max_area) max_area = area ;
            if(l <= r ){
                left++;
                continue;
            }
            if( r < l ){
                right-- ;
                continue;
            }
            
            
        }

        return max_area ;
    }
};