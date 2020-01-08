class Solution {
 public:
  bool lemonadeChange(vector<int>& bills) {
    int n5 = 0, n10 = 0;
    for (int bill : bills) {
      if (bill == 5) {
        n5++;
      } else if (bill == 10) {
        if (n5 >= 1) {
          n5--;
          n10++;
        } else {
          if (n5 < 1) {
            return false;
          }
          n5--;
          n10++;
        }
      } else if (bill == 20) {
        if (n10 >= 1 && n5 >= 1) {
          n10--;
          n5--;
        } else if (n5 >= 3) {
          n5 -= 3;
        } else {
          return false;
        }
      } else {
        throw invalid_argument("only 5, 10, 20 expected in bills");
      }
    }
    return true;
  }
};
