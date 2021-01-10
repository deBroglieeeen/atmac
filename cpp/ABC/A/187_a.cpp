
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll mod = 1000000007;
int main() {
  string a,b = "";
  int ansa, ansb = 0;
  cin >> a >> b;
  //cout << a << b << endl;
  //cout << a[0] << b[1] << endl;
  //cout << atoi(a[2]) << endl;
  rep(i,3) {
    //ans += atoi(a[i]) + atoi(b[i]);
    //cout << ans << endl;
    ansa += (int)a[i] - 48;
    ansb += (int)b[i] - 48;
    //  cout << (int)a[i] - 48<< endl;
    //  cout << (int)b[i] - 48 << endl;
  }
  cout << max(ansa, ansb) << endl;
  return 0;
}

