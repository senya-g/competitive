#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int n, m;
int a[N], f[N], dp[N];

inline int idx(int i, int j) { return i * m + j; }

int main() {
  cin >> n >> m;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int id = idx(i, j);
      cin >> a[id];
    }
  }

  for (int j = 0; j < m; j++) {
    f[idx(0, j)] = 1;
  }

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int up = idx(i - 1, j);
      int cur = idx(i, j);

      if (a[cur] >= a[up]) {
        f[cur] = f[up] + 1;
      } else {
        f[cur] = 1;
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      dp[i] = max(dp[i], f[idx(i, j)]);
    }
  }

  int k;
  cin >> k;

  while (k--) {
    int l, r;
    cin >> l >> r;

    --l, --r;

    int pos = r - dp[r] + 1;

    cout << (pos <= l ? "Yes" : "No") << endl;
  }
}
