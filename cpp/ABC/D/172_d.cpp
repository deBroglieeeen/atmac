#include <bits/stdc++.h>
using namespace std;

int n,ans;
int countDivisors(int n){
  int cnt = 0;
  for(int i = 1; i <= sqrt(n); i++) {
    if(n % i == 0) {
      if(n / i == i) cnt++;
      else cnt += 2;
    }
  }
  return cnt;
}
void sumDivisors(){
  for(int i = 1; i < n + 1; i++) {
    ans += countDivisors(i) * i;
  }
}

int main() {
  cin >> n;
  sumDivisors();
  cout << ans << endl;
}
