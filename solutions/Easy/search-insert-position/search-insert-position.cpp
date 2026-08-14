class Solution {
    
public:
    int search (vector<int>&nums , int start , int end , int target){
        if(start >= end ){
            return start ;
        }
       int mid = start + (end - start)/2 ;

        if(nums[mid] == target){
            return mid ;
        }
        else if( target < nums[mid] ){
           return search(nums , start , mid , target);
        } else {
           return search(nums  , mid+1 , end , target);
        }

    }
    int searchInsert(vector<int>& nums, int target) {

        return search( nums , 0 , nums.size() , target ) ;
        
    }
};