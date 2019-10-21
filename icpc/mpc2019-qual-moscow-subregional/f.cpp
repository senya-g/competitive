#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  ll n;
  cin >> n;
  ll ans = n;

  for (int i = 2; 1ll * i * i <= n; i++) {
    if (n % (1ll * i) == 0) {
      if (i == 2) {
        ans = min(ans,  n / (1ll * i));
      } else {
        ans = min(ans, min(1ll*i, n / (1ll * i)));
      }
    }
  }

  if (n == 4) {
    cout << 4;
  } else {
    cout << ans;
  }

  return 0;
}
