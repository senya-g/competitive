#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n;

// 0 - vishe
// 1 - > sred
// 2 - < sred
// 3 - < min

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  ll arr[5][2];
  for (ll i = 0; i < n; i++) {
    cin >> arr[0][0] >> arr[1][0] >> arr[2][0] >> arr[3][0] >> arr[4][0];

    if (arr[0][0] > 220) {
      arr[0][1] = 0;
    } else {
      if (arr[0][0] >= 205) {
        arr[0][1] = 1;
      } else {
        if (arr[0][0] >= 190) {
          arr[0][1] = 2;
        } else {
          arr[0][1] = 3;
        }
      }
    }

    if (arr[1][0] > 250) {
      arr[1][1] = 0;
    } else {
      if (arr[1][0] >= 225) {
        arr[1][1] = 1;
      } else {
        if (arr[1][0] >= 200) {
          arr[1][1] = 2;
        } else {
          arr[1][1] = 3;
        }
      }
    }

    if (arr[2][0] > 20)
      arr[2][1] = 0;
    else {
      if (arr[2][0] >= 15)
        arr[2][1] = 1;
      else {
        if (arr[2][0] >= 10)
          arr[2][1] = 2;
        else
          arr[2][1] = 3;
      }
    }

    if (arr[3][0] > 6) {
      arr[3][1] = 0;
    } else {
      if (arr[3][0] >= 4) {
        arr[3][1] = 1;
      } else {
        if (arr[3][0] >= 2) {
          arr[3][1] = 2;
        } else {
          arr[3][1] = 3;
        }
      }
    }

    if (arr[4][0] > 7) {
      arr[4][1] = 0;
    } else {
      if (arr[4][0] >= 5) {
        arr[4][1] = 1;
      } else {
        if (arr[4][0] >= 3) {
          arr[4][1] = 2;
        } else {
          arr[4][1] = 3;
        }
      }
    }

    int sum[4];
    int res = 3;
    for (int j = 0; j < 4; j++) sum[j] = 0;
    for (int j = 0; j < 5; j++) sum[arr[j][1]]++;

    if ((arr[0][1] == 0 || arr[1][1] == 0) && sum[0] >= 3)
      res = 0;
    else {
      bool ok = true;
      for (int j = 0; j < 5; j++)
        if (arr[j][1] >= 3) {
          ok = false;
          break;
        }
      if ((ok && (sum[1] + sum[0] >= 3)) ||
          (sum[0] >= 3 || (sum[1] >= 1 && sum[0] >= 2)))
        res = 1;
      else {
        if (sum[0] + sum[1] >= 3 || sum[0] >= 2 || (sum[0] >= 1 && sum[1] >= 1))
          res = 2;
      }
    }
    cout << res << endl;
  }

  return 0;
}
