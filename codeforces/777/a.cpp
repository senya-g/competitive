#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, tmp;
  int x = 0, y = 0, z = 0;

  cin >> a >> b;

  if (b == 0)
    x = 1;
  else if (b == 1)
    y = 1;
  else
    z = 1;


  for (int i = a % 6; i >= 1; i--) {
    if (i % 2 == 0)
      swap(y, z);
    else
      swap(y, x);
  }

  if (x == 1)
    cout << 0;
  else if (y == 1)
    cout << 1;
  else
    cout << 2;

  return 0;
}
