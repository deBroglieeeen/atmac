#include <bits/stdc++.h>
using namespace std;

int main(){
  int l,r,d;
  cin >> l >> r >> d;
  int ans = 0;
  for (int i = l; i < r + 1; i++){
    if(i % d == 0) ans +=1;
  }
  cout << ans << endl;
}
