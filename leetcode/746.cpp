class Solution {
 public:
  int minCostClimbingStairs(vector<int>& cost) {
    int previous = cost[0];
    int current = cost[1];
    for (int i = 2; i < cost.size(); i++) {
      int next = cost[i] + min(previous, current);
      previous = current;
      current = next;
    }
    return min(previous, current);
  }
};
