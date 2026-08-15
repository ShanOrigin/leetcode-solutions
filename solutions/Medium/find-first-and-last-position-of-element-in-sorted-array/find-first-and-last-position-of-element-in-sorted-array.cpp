class Solution {

public:
  int search(std::vector<int> &nums, int target, int d = 0) {
    int i = 0, j = nums.size() - 1;
    int index = -1;

    while (i <= j) {

      int mid = i + (j - i) / 2;

      if (nums[mid] == target) {
        index = mid;
        if (d == 0) {

          j = mid - 1;
        } else {
          i = mid + 1;
        }
      } else if (nums[mid] < target) {
        i = mid + 1;
      } else {
        j = mid - 1;
      }
    }
    return index;
  }

  std::vector<int> searchRange(std::vector<int> &nums, int target) {
    int size = nums.size();
    if (size == 0)
      return {-1, -1};
    if (size == 1) {
      int ind = nums[0] == target ? 0 : -1;
      return {ind, ind};
    }

    int left = search(nums, target, 0);
    int right = search(nums, target, 1);
    return {left, right};
  }
};