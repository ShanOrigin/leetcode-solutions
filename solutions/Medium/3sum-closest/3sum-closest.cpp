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
                long long abs_sum = sum - target;
                long long abs_min_sum = min_sum - target ;
                
                abs_sum = abs_sum < 0 ? abs_sum * -1 : abs_sum ;
                abs_min_sum = abs_min_sum < 0 ? abs_min_sum * -1 : abs_min_sum ;
                
                if( abs_sum < abs_min_sum )min_sum = sum ;
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