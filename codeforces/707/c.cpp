#include <bits/stdc++.h>

using namespace std;

int main() {
  long long k, b;
  cin >> k;

  long long mod = 2 - k % 2;
  b = (k * k / mod - mod) / 2;

  if (b == 0) cout << -1;
  else cout << b << " " << b + mod << endl;

  return 0;
}
