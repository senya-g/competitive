char count[1 << 11];

const int Z = []() {
  ::count[0] = 0;
  for (int i = 1; i < sizeof(::count) / sizeof(char); i++) {
    ::count[i] = char(::count[i >> 1] + (i & 1));
  }
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return 0;
}();

class Solution {
 public:
  int hammingWeight(uint32_t n) {
    return 
      ::count[n >> 22] + 
      ::count[(n >> 11) & 0b111'1111'1111] +
      ::count[n & 0b111'1111'1111];
  }
};
