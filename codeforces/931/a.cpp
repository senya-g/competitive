#include <iostream>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  if (a > b) {
    int tmp = b;
    b = a;
    a = tmp;
  }

  int deg = b - a;
  int res = 0;

  int i = 0;
  int j = 0;

  while (deg != 0) {
    deg--;
    res += 1 * ++i;

    if (deg != 0) {
      deg--;
      res += 1 * ++j;
    }
  }

  cout << res;

  return 0;
}
