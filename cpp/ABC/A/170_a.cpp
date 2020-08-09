#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  vector<int> v(5);
  rep(i,5) {
    cin >> v[i];
  }
  rep(i,5) {
    if(v[i] == 0) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}
