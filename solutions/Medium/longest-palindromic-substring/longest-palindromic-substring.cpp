class Solution {
public:

    int expand(string& s, int left, int right, int& start) {

        int size = s.size();

        while (left >= 0 && right < size && s[left] == s[right]) {
            left--;
            right++;
        }

        int length = right - left - 1;

        start = left + 1;

        return length;
    }

    string longestPalindrome(string s) {

        int size = s.size();

        int start = 0;
        int longest = 1;

        for (int i = 0; i < size; i++) {

            int oddStart;
            int odd = expand(s, i, i, oddStart);

            if (odd > longest) {
                longest = odd;
                start = oddStart;
            }

            int evenStart;
            int even = expand(s, i, i + 1, evenStart);

            if (even > longest) {
                longest = even;
                start = evenStart;
            }
        }

        return s.substr(start, longest);
    }
};