class Solution {
public:

    int expandFromCenter(string s, int left, int right) {

        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }

        return right - left - 1;
    }

    string longestPalindrome(string s) {

        int stringLength = s.length();

        int longestStart = 0;
        int longestLength = 1;

        for (int center = 0; center < stringLength; center++) {

            // Odd-length palindrome
            int oddLength = expandFromCenter(s, center, center);

            // Even-length palindrome
            int evenLength = expandFromCenter(s, center, center + 1);

            int currentLength;

            if (oddLength > evenLength) {
                currentLength = oddLength;
            } else {
                currentLength = evenLength;
            }

            if (currentLength > longestLength) {

                longestLength = currentLength;

                longestStart = center - (currentLength - 1) / 2;
            }
        }

        return s.substr(longestStart, longestLength);
    }
};