class Solution {
public:
  int reverseNumber(int num) {
    if (num != 0) {
      int reverse = 0;
      while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
      }
      return reverse;
    }
    return 0;
  }

  string isPalindrome(int num) {
    int reverse = reverseNumber(num);
    if (num == reverse) {
      return "Yes";
    } else {
      return "No";
    }
  }
};