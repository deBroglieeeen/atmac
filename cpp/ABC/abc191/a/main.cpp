#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i,n) for(int i = 0; i < (n); ++i)
//using ll = long long;
//using P = pair<int,int>;

int main() {
  int t,s;
  double v,d;
  cin >> v >> t >> s >> d;
  //cout << d/v << endl;
  if(t <= d/v && d/v <= s) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}
