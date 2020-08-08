#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int ans = 0;
  vector<int> a(n);
  for(int i = 1; i <= n; i++) {
    int x;
    cin >> x;
    if(i % 2 != 0 && x % 2 != 0 ) {
      ans += 1;
    }

  }
  cout << ans << endl;
}
