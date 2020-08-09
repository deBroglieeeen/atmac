#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  vector<string> types(4);
  types.at(0) = "AC"; types.at(1) = "WA"; types.at(2) = "TLE"; types.at(3) = "RE";
  map<string,int> judge;
  rep(i,4) {
    judge[types.at(i)] = 0;
  }
  int n;
  cin >> n;
  rep(i,n) {
    string type = "";
    cin >> type;
    if(type == types.at(0)) judge[types.at(0)] += 1;
    if(type == types.at(1)) judge[types.at(1)] += 1;
    if(type == types.at(2)) judge[types.at(2)] += 1;
    if(type == types.at(3)) judge[types.at(3)] += 1;
  }
  rep(i,4){
    auto key = types.at(i);
    auto value = judge[key];
    cout << key << " x " << value << endl;
  }
  return 0;
}
