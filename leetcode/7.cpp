class Solution {
public:
  int reverse(int x) {
    bool flag = false;

    long long int tmp = x;

    if (tmp < 0) {
      tmp = -tmp;
      flag = true;
    }

    std::string s = std::to_string(tmp);

    std::reverse(s.begin(), s.end());

    long long int res = std::stoull(s);

    if (flag) res = -res;

    if (res >= std::pow(2.0, 31.0) - 1 || res <= -std::pow(2.0, 31.0)) {
      res = 0;
    }

    return res;
  }
};
