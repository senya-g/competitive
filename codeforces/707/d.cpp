#include <bits/stdc++.h>

using namespace std;

#define N 1010
#define M 100100

int n, m, q, type, a, b;
int last[M][N], f[M];

bool on[M][N];

int main() {
  cin >> n >> m >> q;

  for (int t = 1; t <= q; t++) {
    for (int i = 1; i <= n; i++) {
      last[t][i] = last[t - 1][i];
    }

    cim >> type;

    if (type == 1 || type == 2) {
      cin >> a >> b;

      f[t] = f[t - 1];
      for (int j = 1; j <= m; j++) {
        on[t][j] = on[last[t][a]][j];
      }

      last[t][a] = t;
      f[t] -= on[t][b];
      on[t][b] = (type == 1);
      f[t] += on[t][b];
    } else if (type == 3) {
      cin >> a;

      f[t] = f[t - 1];
      for (int j = 1; j <= m; j++) {
        f[t] -= on[last[t][a]][j];
        on[t][j] = !on[last[t][a]][j];
        f[t] += on[t][j];
      }

      last[t][a] = t;
    } else {
      cin >> a;
      f[t] = f[a];
      for (int i = 1; i <= n; i++) {
        last[t][i] = last[a][i];
      }
    }

    cout << f[t] << endl;
  }

  return 0;
}
