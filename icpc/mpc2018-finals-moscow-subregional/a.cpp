#include <bits/stdc++.h>

using namespace std;

int a[100010];

vector<int> v, v1;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
    v.push_back(a[i]);
    v1.push_back(a[i]);
  }

  int tmp = -1;

  for (int i = 0; i < n / 2; ++i) {
    if (a[i] != a[n - i - 1]) {
      tmp = i;
      break;
    }
  }

  if (tmp == -1) {
    cout << n / 2 << " " << a[n / 2] << endl;
  } else {
    bool l = 0;
    v.insert(v.begin() + tmp, a[n - 1 - tmp]);

    l = 1;

    for (int i = 0; i < v.size() / 2; ++i) {
      if (v[i] != v[n - i]) {
        l = 0;
        break;
      }
    }

    if (l) {
      cout << tmp << " " << a[n - 1 - tmp] << endl;
      return 0;
    }

    l = 1;
    v1.insert(v1.begin() + n - tmp, a[tmp]);

    for (int i = 0; i < v1.size() / 2; ++i) {
      if (v1[i] != v1[n - i]) {
        l = 0;
        break;
      }
    }

    if (l) {
      cout << n - tmp << " " << a[tmp] << endl;
      return 0;
    }

    cout << -1 << endl;
  }

  return 0;
}
