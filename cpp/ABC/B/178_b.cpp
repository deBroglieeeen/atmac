
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  vector<ll> X(2);
  vector<ll> Y(2);
  cin >> X[0] >> X[1];
  cin >> Y[0] >> Y[1];
  ll ans = -10000000001;
  rep(i,2) {
    rep(j,2) {
      ans = max(ans,X[i] * Y[j]);
    }
  }
  cout << ans << endl;
  return 0;
}
