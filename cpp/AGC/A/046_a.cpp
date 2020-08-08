#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  int res = a % b;
  if(res == 0){
    return b;
  }
  return gcd(b, a % b);
}

int lcm(int a,int b){
  return a / gcd(a,b) * b;
}
int main(){
  int x;
  cin >> x;
  int l = lcm(360,x);

  cout << l / x << endl;
}
