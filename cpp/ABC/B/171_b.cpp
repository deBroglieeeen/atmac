#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 0;
  int k = 0;
  cin >> n;
  cin >> k;
  vector<int> price(n);
  for(int i = 0; i < n; i++) {
    cin >> price.at(i);
  }
  sort(price.begin(),price.end());
  int ans = 0;
  for(int i = 0; i < k; i++) {
    ans += price.at(i);
  }
  cout << ans << endl;
}
