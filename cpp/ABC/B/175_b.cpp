#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n = 0;
  cin >> n;
  int ans = 0;
  vector<ll> l(n);
  rep(i,n) cin >> l[i];
  for(int i = 0; i < n; ++i) {
    for(int j = i + 1; j < n; ++j) {
      if(l[i] == l[j]) continue;
      for(int k = j + 1; k < n; ++k) {
        bool isok = true;
        if(abs(l[i] - l[j]) >= l[k] || l[i] + l[j] <= l[k] ) isok = false;
        if(l[i] == l[j] || l[i] == l[k] || l[j] == l[k]) isok = false;
        if(isok) ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
