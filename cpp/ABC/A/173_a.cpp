#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  if(n % 1000 == 0) {
    cout << 0 << endl;
  }else {
    cout << (n / 1000 + 1) * 1000 - n << endl;
  }

  return 0;
}
