// What are INT_MIN and INT_MAX?
// -> Need to include #include<limits.h>

// What are min(a,b) and max(a,b)?
// -> smallest = min(digit, smallest) this will store the smallest value in the smallest int

//-----------------------------
// Solution 1
//-----------------------------
class Solution {
public:
  int smallestDigit(int num) {
    int least = 9;
    while (num != 0) {
      int digit = num % 10;
      smallest = min(digit, least);
      num = num / 10;
    }
    return least;
  }
};

//-----------------------------
// Solution 2
//-----------------------------
class Solution {
public:
  int smallestDigit(int num) {
    int least = 9;
    while (num != 0) {
      int digit = num % 10;
      if (digit < least) {
        least = digit;
      }
      num = num / 10;
    }
    return least;
  }
};
