#include <bits/stdc++.h>

using namespace std;

int n;
stack<char> stk;
string s;

int main() {
  cin >> n;
  getchar();

  for (int i = 0; i < n; i++) {
    getline(cin, s);
    if (s[0] == 'A') {
      stk.push(s[s.length() - 1]);
    } else {
      if (stk.empty()) {
        cout << "No";
        return 0;
      }
      if (stk.top() != s[s.length() - 1]) {
        cout << "No";
        return 0;
      } else {
        stk.pop();
      }
    }
  }

  if (stk.empty()) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}
