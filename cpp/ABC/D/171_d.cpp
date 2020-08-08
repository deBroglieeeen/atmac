#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 0;
  int q = 0;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  cin >> q;
  vector<vector<int>> man(q,vector<int>(2));
  for(int i = 0; i < q; i++) {
    cin >> man.at(i).at(0);
    cin >> man.at(i).at(1);
  }
  vector<int> ans(q);
  for(int i = 0; i < q; i++) {
    int sum = 0;
    replace(a.begin(),a.end(),man.at(i).at(0),man.at(i).at(1));
    for(int i = 0; i < n; i++) {
      sum += a.at(i);
    }
    ans.at(i) = sum;
    cout << sum << endl;
  }
}
