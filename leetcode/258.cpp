class Solution {
 public:
  int addDigits(int num) {
    if (num == 0) {
      return 0;
    } else {
      int r = num % 9;
      if (r == 0) {
        return 9;
      } else {
        return r;
      }
    }
  }
};
