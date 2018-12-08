#include <bits/stdc++.h>

#define N 200001
#define int long long

using namespace std;

int main(){
  bool used[N];
  int ans = 1e11;
  int n, m, k;
  cin >> n >> m >> k;
  int u[N], v[N], l[N];
  for (int i = 1; i <= m; i++){
    cin >> u[i] >> v[i] >> l[i];
  }
  for (int  i = 1; i <= k; i++){
    int x;
    cin >> x;
    used[x] = 1;
  }
  for (int i = 1; i <= m; i++){
    if (used[u[i]] != used[v[i]]){
      ans = min(ans, l[i]);
    }
  }
  if (ans == 1e11){
    cout << -1 << '\n';
  }
  else{
    cout << ans << '\n';
  }
  return 0;
}
