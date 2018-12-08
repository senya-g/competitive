#include <bits/stdc++.h>

#define ll long long

using namespace std;

const ll maxn = 3e5 + 100;

ll n, m, a[maxn], t[maxn];

double b[maxn];

ll sum, mem[300010];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;

  ll sum = 0;

  for (ll i = 1; i <= n; i++) {
    cin >> a[i];
  }

  sort(a + 1, a + n + 1);

  ll top = 1;
  for (ll i = n; i >= 1; i--) {
    sum = sum + a[i];
    b[top++] = a[i] * 1.0;
  }

  for (ll i = 1; i <= 300000; ++i) {
    for (ll j = i; j <= n; j += i) {
      mem[i] += b[j];
    }
  }

  for (ll i = 1; i <= m; i++) {
    ll x;
    double y;
    cin >> x >> y;

    long double ans = sum;
    ans -= (1 - y) * mem[x];
    cout << fixed << setprecision(9) << ans << endl;
  }
}
