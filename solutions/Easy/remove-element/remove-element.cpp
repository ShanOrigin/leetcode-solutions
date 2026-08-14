class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0 , j = nums.size()-1 ;

        while( i <= j ){
            if(nums[i] != val){ 
             i++;
             continue ;
            }
            if(nums[j] == val ){
                j--;
                continue ;
            }
            nums[i] = nums[j];
            i++;
            j--;
        }
        return i  ;
    }
};