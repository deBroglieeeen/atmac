#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  string s = "abc";
  int num,k,n;
  cin >> num;
  for(int i = 0; i < num; i++) {
    cin >> n >> k;
    for(int j = 0; j < n; j++) cout << s[j % 3];
    cout << "\n";
  }
  return 0;
}
