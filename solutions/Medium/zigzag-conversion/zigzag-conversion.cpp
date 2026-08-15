class Solution {
public:
  std::string convert(std::string s, int numRows) {
    int size = s.size();
    if (size == 0)
      return "";
    if (size <= numRows || numRows <= 1)
      return s;

    std::string ans;
    std::unordered_map<int, std::string> map;

    int i = 0;
    while (i < size) {

      int k = 0;
      while (k < numRows && (i + k) < size) {

        map[k] = map[k] + s[i + k];
        k++;
      }
      i += k;

      int j = numRows - 2;
      while (j > 0 && i < size) {
        map[j] = map[j] + s[i++];
        j--;
      }
    }

    for (int i = 0; i < numRows; ++i) {
      ans = ans + map[i];
    }

    return ans;
  }
};