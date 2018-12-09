#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> count(n + 1);
  count[0] = count[1] = 1;

  for (int i = 2; i <= n; i++) {
    count[i] = count[i - 2] + count[i / 2];
  }

  cout << count.back();

  return 0;
}
