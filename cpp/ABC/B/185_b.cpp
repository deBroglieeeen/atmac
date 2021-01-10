
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll mod = 1000000007;
int main() {
  ll N,M,T;
  cin >> N >> M >> T;
  int a,b = 0;
  int preB = 0;
  ll N1 = N;
  rep(i,M) {
    cin >> a >> b;
    if(N - (a - preB) <= 0) {
      cout << "No" << endl;
      return 0;
    }
    N -= (a - preB);
    N += (b - a);
    preB = b;
    if(N1 < N) N = N1;
  }
  if(N - (T - preB) > 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

