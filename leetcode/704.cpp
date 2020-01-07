const int Z = []() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return 0;
}();

class Solution {
 public:
  int search(vector<int>& nums, int target) {
    auto it = lower_bound(nums.begin(), nums.end(), target);
    if (it == nums.end()) {
      return -1;
    } else if (*it > target) {
      return -1;
    } else {
      return (int)(it - nums.begin());
    }
  }
};
