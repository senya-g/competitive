class Solution {
 private:
  int convert(const char a) {
    if (a == 'I') return 1;
    if (a == 'V') return 5;
    if (a == 'X') return 10;
    if (a == 'L') return 50;
    if (a == 'C') return 100;
    if (a == 'D') return 500;
    if (a == 'M') return 1000;

    return 0;
  }

 public:
  int romanToInt(std::string s) {
    int res = 0;
    int dim = s.size();

    for (int i = 0; i < dim; i++) {
      if (i < (dim - 1) && convert(s[i]) < convert(s[i + 1])) {
        res -= convert(s[i]);
      } else {
        res += convert(s[i]);
      }
    }

    return res;
  }
};
