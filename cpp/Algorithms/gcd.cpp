#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
//using ll = long long;
//using P = pair<int,int>;

int gcd(int a, int b) {
  if(a == 0) return b;
  return gcd(b % a, a);  	
}
int main() {
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl; 
  return 0;
}
