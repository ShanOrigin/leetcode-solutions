class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size() ;
        std::sort(nums.begin() , nums.end( ) );
        int ptr1 = 0 , ptr2 = 1 , ptr3 = size - 1 ;
        long long min_sum = (long long)nums[ptr1] + nums[ptr2] + nums[ptr3];
        

        while(ptr1 < size -2 ){
            while(ptr2 <ptr3){
                long long sum = (long long ) nums[ptr1] + nums[ptr2] + nums[ptr3] ;
                
                if( std::llabs( sum - target ) < std::llabs( min_sum - target ))min_sum = sum ;
                if( sum < target )
                ptr2++;
                else if( sum > target )
                ptr3--;
                else return sum ;
                
            }
            ptr1++;
            ptr2 = ptr1 + 1 ;
            ptr3 = size - 1 ;
            
        }
        return min_sum ;
    }
};