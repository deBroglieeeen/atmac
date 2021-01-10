
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll mod = 1000000007;
int main() {
  int n = 0;
  cin >> n;
  vector< vector<int>> plane(n,vector<int>(2));
  rep(i,n) {
    cin >> plane[i][0] >> plane[i][1];
  }
  int ans = 0;
  rep(i,n) {
    for(int j = i + 1; j < n; j++) {
      double difx, dify = 0;
      difx = plane[j][0] - plane[i][0];
      dify = plane[j][1] - plane[i][1];
      // if(dify/difx == 0) continue;
      if(-1 <= dify / difx && dify / difx <= 1){
        ans += 1;
      }
      //cout << dify / difx << endl;
    }
  }
  cout << ans << endl;
  return 0;
}

