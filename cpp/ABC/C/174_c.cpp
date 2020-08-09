#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll k;
  cin >> k;
  int x = 0;
  x = 7 % k;
  set<int> s;
  int i = 1;
  while(s.count(x) == 0){
    if(x == 0){
      cout << i << endl;
      return 0;
    }
    s.insert(x);
    ++i;
    x = (10 * x + 7) % k ;
  }
  cout << -1 << endl;
  return 0;
}
