#include <bits/stdc++.h>
using namespace std;

void increase_book(vector<int>& vec,int k, int& time,int& ans){
  time += vec.at(0);
  if(time <= k) {
    ans += 1;
    vec.erase(vec.begin());
  }
}
int main() {
  int n,m,k;
  cin >> n;
  cin >> m;
  cin >> k;
  vector<int> a(n),b(m);
  for(int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  for(int i = 0; i < m; i++) {
    cin >> b.at(i);
  }
  int time,ans;
  while (time <= k){
    if(a.size() == 0 && b.size() == 0){
      break;
    }
    else if(a.size() == 0) {
      increase_book(b,k,time,ans);
      continue;
    }else if (b.size() == 0){
      increase_book(a,k,time,ans);
      continue;

    }

    if(a.at(0) < b.at(0)) {
      increase_book(a,k,time,ans);
    } else {
      increase_book(b,k,time,ans);
    }

  }
  cout << ans << endl;

}
