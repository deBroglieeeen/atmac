#include <bits/stdc++.h>
using namespace std;

int main(){
  int N = 0;
  cin >> N;
  vector<vector<int>> rubic(N,vector<int>(N));
  vector<vector<int>> goal(N,vector<int>(N));
  for (int i = 0; i < N; i++){

    for(int j = 0; j < N; j++){
      cin >> rubic.at(i).at(j);
    }
  }
  for (int i = 0; i < N; i++){

    for(int j = 0; j < N; j++){
      cin >> goal.at(i).at(i);
    }
  }


}
