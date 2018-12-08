#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, ans[100010];
ll a[200010], f[1000010], l[1000010], g[1000010], b[200010];

int main() {
  cin >> n;

  for (int i = 1; i <= 2 * n; i += 2) {
    a[i / 2 + 1] = i;
    b[i / 2 + 1] = i;
    l[i] = i / 2 + 1;
  }

  int tmp;
  for (int i = 1; i <= 1000; ++i) {
    g[i * i] = i;
    if (i * i >= 2 * n) {
      tmp = i * i;
      break;
    }
  }

  for (int i = 2 * n; i >= 1; --i) {
    if (g[i]) tmp = i;
    f[i] = tmp;
  }

  for (int i = 1; i <= n; ++i) {
    if (g[a[i]]) continue;
    if (a[i] != b[i]) continue;
    if (l[2 * f[a[i]] - a[i]]) {
      swap(a[i], a[l[2 * f[a[i]] - a[i]]]);
    }
  }

  ll tmp1 = 0;
  for (int i = 1; i <= n; ++i) {
    a[i] = a[i] / 2 + 1;
    tmp = (i - 1 + a[i]);
    ans[a[i]] = g[f[tmp]];
    tmp1 += ans[a[i]];
  }

  cout << tmp1 << endl;

  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j < ans[i] - 1; ++j) {
      cout << i << " ";
    }
  }

  for (int i = n; i >= 1; --i) {
    cout << a[i] << " ";
  }

  cout << endl;

  return 0;
}
