#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int flag = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char str[64];
      scanf("%s", str);

      if (str[0] == 'Y' || str[0] == 'C' || str[0] == 'M')
        flag = 0;
    }
  }

  cout << (flag ? "#Black&White" : "#Color");

  return 0;
}
