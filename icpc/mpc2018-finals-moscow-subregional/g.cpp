#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n, m, t;

  cin >> n >> m >> t;

  ll mx = 0, mn = 0;
  mx = mn = t / (5 * n) * (m * 5);
  ll tmp1 = t % (5 * n);
  ll tmp = (tmp1 + 4) / 5, tmp2 = tmp1 / 5;

  if (tmp >= m) {
    mx += min(tmp1, m * 5);
  } else {
    mx += min(tmp1, tmp * 5);
  }

  tmp -= n - m;

  if (tmp > 0) {
    mn += min(tmp1 - (n - m) * 5, tmp * 5);
  }

  cout << mn << " " << mx << endl;

  return 0;
}
