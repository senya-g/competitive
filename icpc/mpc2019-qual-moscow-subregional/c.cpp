#include <bits/stdc++.h>

using namespace std;

int main() {
  set<long long> s;
  long long n, t;

  cin >> n;
  for (long long i = 0; i < n; i++) {
    cin >> t;
    if (t > n) continue;
    s.insert(t);
  }
  cout << s.size() << endl;

  return 0;
}
