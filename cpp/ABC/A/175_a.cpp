#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  cin >> s;
  int ans, cur = 0;
  bool streak = true;
  for(auto a : s) {
    if(a == 'R' && streak) ++cur;
    else if(a == 'R' && !streak){ ++cur; streak = true; }
    else streak = false, ans = max(ans,cur), cur = 0;
  }
  ans = max(ans,cur);
  cout << ans << endl;
  return 0;
}
