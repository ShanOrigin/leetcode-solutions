class Solution {
public:
  std::vector<std::string> letterCombinations(std::string digits) {
    std::vector<std::string> comb;

    std::unordered_map<char, std::pair<char, int>> map;
    int factor = 3, start = 94;
    for (char i = '2'; i <= '9'; ++i) {

      char st = (char)(start + factor);
      if (i == '7' || i == '9')
        factor = 4;
      map[i] = {st, factor};
      start += factor;
      factor = 3;
    }

    for (char d : digits) {
      std::pair<char, int> val = map[d];
      std::vector<std::string> next_p(val.second);

      for (int i = 0; i < val.second; ++i) {
        next_p[i] = std::string(1, (char)val.first + i);
      }

      if (comb.size() == 0) {
        comb = next_p;
        continue;
      }
      int ind = 0;
      std::vector<std::string> new_comb(comb.size() * next_p.size());
      for (std::string ostr : comb) {

        for (std::string nstr : next_p) {
          new_comb[ind++] = ostr + nstr;
        }
      }
      comb = new_comb;
    }

    return comb;
  }
};