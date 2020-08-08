#include <bits/stdc++.h>
using namespace std;
int main() {
  string s,t;
  cin >> s;
  cin >> t;
  int ans = 0;
  for(int i = 0; i < s.length(); i++) {
    if(s.at(i) != t.at(i)) {
      ans += 1;
    }
  }
  cout << ans << endl;
}
