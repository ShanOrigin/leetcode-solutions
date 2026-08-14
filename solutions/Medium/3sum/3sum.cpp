class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> triplats;

        sort(nums.begin(), nums.end());
        int size = nums.size() ;
        int ptr1 = 0;
        int ptr2 = 1;
        int ptr3 = size - 1;

        while (ptr1 < size - 2) {

            while (ptr2 < ptr3) {

                int sum = nums[ptr1] + nums[ptr2] + nums[ptr3];

                if (sum < 0) {
                    ptr2++;
                }
                else if (sum > 0) {
                    ptr3--;
                }
                else {
                    triplats.push_back({
                        nums[ptr1],
                        nums[ptr2],
                        nums[ptr3]
                    });

                    ptr2++;
                    ptr3--;

                    while (ptr2 < ptr3 &&
                           nums[ptr2] == nums[ptr2 - 1]) {
                        ptr2++;
                    }

                    while (ptr2 < ptr3 &&
                           nums[ptr3] == nums[ptr3 + 1]) {
                        ptr3--;
                    }
                }
            }

            ptr1++;

            while (ptr1 < size - 2 &&
                   nums[ptr1] == nums[ptr1 - 1]) {
                ptr1++;
            }

            ptr2 = ptr1 + 1;
            ptr3 = size - 1;
        }

        return triplats;
    }
};