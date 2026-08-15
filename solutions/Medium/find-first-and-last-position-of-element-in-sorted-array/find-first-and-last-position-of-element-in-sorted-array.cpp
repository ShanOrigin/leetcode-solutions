class Solution {

public:
  enum class Direction { left = 0, right = 1 };

  int search(std::vector<int> &nums, int target,
             Direction d = Direction::left) {
    int i = 0, j = nums.size() - 1;
    int index = -1;

    while (i <= j) {

      int mid = i + (j - i) / 2;

      if (nums[mid] == target) {
        index = mid;
        if (d == Direction::left) {

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

    int left = search(nums, target, Direction::left);
    int right = search(nums, target, Direction::right);
    return {left, right};
  }
};