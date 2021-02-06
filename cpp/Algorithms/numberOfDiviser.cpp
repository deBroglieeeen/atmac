#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

// O(n^2)
vector<int> getDivisorsBrute(int n) {
  vector<int> Divisors(n);
  rep(i,n+1) {
    if(i == 0) continue;
    bool isChecked = false;
    rep(j,n) {
      if(Divisors[j] == i) isChecked = true;
      break;
    }
    if(!isChecked && n % i == 0) Divisors.push_back(i);
  }
  return Divisors;
}

int main(){
  vector<int> Div;
  int n;
  cin >> n;
  Div = getDivisorsBrute(n);
  rep(i,n) {
    if(Div[i] == 0) Div.erase(Div.begin() + i);
  }
  rep(i,n) cout << Div[i] << endl;
}
