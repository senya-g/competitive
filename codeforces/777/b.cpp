#include <bits/stdc++.h>

using namespace std;

const int N = (int)3e5 + 228;

int main() {
  int n;
  cin >> n;

  string str1;
  cin >> str1;

  string str2;
  cin >> str2;

  multiset<int> st1, st2;
  for (char c : str2) {
    st1.insert(c - '0');
    st2.insert(c - '0');
  }

  int ans1 = 0, ans2 = 0;

  sort(str1.begin(), str1.end());
  for (char c : str1) {
    if (st1.lower_bound(c - '0') == st1.end()) {
      ans1++;
    } else {
      st1.erase(st1.lower_bound(c - '0'));
    }
  }

  for (char c : str1) {
    if (st2.upper_bound(c - '0') == st2.end()) {
    } else {
      st2.erase(st2.upper_bound(c - '0'));
      ans2++;
    }
  }

  cout << ans1 << endl << ans2 << endl;

  return 0;
}
