#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,d;
  cin >> n >> d;
  int ans = 0;
  // vector<vector<int>> points(n,vector<int>(2));
  for(int i = 0; i < n; i++) {
    // cin >> points.at(i).at(0);
    // cin >> points.at(i).at(1);
    double x,y;
     cin >> x >> y;
    // cout << x * x << endl;
    // cout << y * y << endl;
    // cout << sqrt(x * x + y * y) << endl;
    // cout << sqrt((x * x) + (y * y)) << endl;
    if(sqrt(x*x + y*y) <= d) {
      ans += 1;
    }
  }
  cout << ans << endl;
}
