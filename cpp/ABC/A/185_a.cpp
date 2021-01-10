#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll mod = 1000000007;
int main() {
  vector<int> A(4);
  rep(i,4) {
    cin >> A[i];
    }
  sort(A.begin(),A.end());
  cout << A[0] << endl;
  return 0;
}

