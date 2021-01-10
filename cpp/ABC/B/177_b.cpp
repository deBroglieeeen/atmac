#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string s,t;
  cin >> s >> t;
  int ans;
  int cur;
  rep(i,s.size()){
    if(i + t.size() > s.size()) break;
    rep(j,t.size()){
      if(s[i + j] == t[j]){
        cur++;
      }
    }
    ans = max(ans,cur);
    cur = 0;
  }
  cout << t.size() - ans << endl;
  return 0;
}
