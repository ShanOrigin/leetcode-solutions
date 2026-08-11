class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::vector<int> res(2);

        int start = 0 , end = numbers.size() - 1 ;

        while( start < end ){
            int sum = numbers[start] + numbers[end];
        if(sum == target){
            res[0] = ++start;
            res[1] = ++end;
            break;
        }
        else if( sum < target) {
              start++; 
        } else {
            end--;
        }
        }


        return res ;
    }
};