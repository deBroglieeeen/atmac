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
      if(Divisors[j] == i) {
        isChecked = true;
        break;
      }
    }
    if(!isChecked && n % i == 0) Divisors.push_back(i);
  }
  return Divisors;
}

set<int> getSetDivBrute(int n) {
  set<int> set {1};
  rep(i, n + 1) {
    if(i == 0) continue;
    if(n % i == 0) set.insert(i);
  }
  return set;
}

int main(){
  vector<int> Div;
  int n;
  cin >> n;
  Div = getDivisorsBrute(n);
//  rep(i,n) {
//    if(Div[i] == 0) Div.erase(Div.begin() + i);
//  }
  vector<int> filterNumbers;
  copy_if(Div.begin(),Div.end(),
      back_inserter(filterNumbers),
     // [=](int i) {return i != 0 && i != n;});
      [=](int i) {
        if(i != 0 && i != n) return i;
      });
  filterNumbers.push_back(n);
  //rep(i,sizeof(filterNumbers)) cout << filterNumbers[i] << endl;
  set<int> divSet;
  divSet = getSetDivBrute(n);
  //rep(i, sizeof(divSet)) cout << divSet[i] << endl;
  for(auto num : divSet) cout << num << endl;
}
