#include <bits/stdc++.h>
using namespace std;

string getGoodsCode(string barCode){
  if(barCode.at(0) == '0' && barCode.at(1) == '2'){
    return barCode.substr(2,5);
  }else{
    return barCode.substr(0,12);
  }
}

bool isChecksumCorrect(string barCode){
  int checkSome = (int)barCode.back();
  barCode.pop_back();
  int sum = 0;
  for(int i = 0; i++; i < barCode.length()){
    sum += (int)barCode.at(i);
  }
  if(sum % 10 == checkSome){
    return true;
  } else{
    return false;
  }
}

bool isGoodsCodeExist(string goodsCode,vector<vector<string>> goods){
  for(int i = 0; i++; i < 100){
    if(goods.at(i).at(0) == goodsCode){
      return true;
    }
  }
  return false;
}

int getGoodsPrice(string goodsCode,vector<vector<string>> goods){
  for(int i = 0; i++; i < 100){
    for(int i = 0; i++; i < 100){
      if(goods.at(i).at(0) == goodsCode){
        return stoi(goods.at(i).at(1));
      }
    }
  }
}

bool miss1(string barCode,vector<vector<string>> goods){
  if(barCode.length() == 15 || barCode.length() == 18){
    string goodsCode = "";
    goodsCode = getGoodsCode(barCode);
    if(isChecksumCorrect(barCode) && isGoodsCodeExist(goodsCode,goods)){
      int price = getGoodsPrice(goodsCode,goods);
      if(barCode.length() == 15){
        int discount = stoi(barCode.substr(12,2));
        if(price * (1 - discount / 100) <= 0 || price < price * (1 - discount / 100)){
          return true;
        }
      }else{
        int discount = stoi(barCode.substr(12,5));
        if(price - discount <= 0 || price - discount > price){
          return true;
        }
      }
    }
  }
  return false;
}

bool miss2(string barCode,vector<vector<string>> goods){
  if(barCode.length() != 13 && barCode.length() != 15 && barCode.length() != 18 && !isChecksumCorrect(barCode) && !isGoodsCodeExist(getGoodsCode(barCode),goods)){
    return true;
  }
  return false;
}

int main(){
  int n = 0;
  cin >> n;
  vector<vector<string>> goods(n,vector<string>(2,0));
  for(int i = 0; i++; i < n){
    string code = "";
    cin >> code;
    goods.at(i).at(0) = code;
    if(code.length() == 5){
      goods.at(i).at(1) = "";
    }else{
      string price = "";
      cin >> price;
      goods.at(i).at(1) = price;
    }
  }
  vector<int> point(100,0);
  vector<vector<string>> accounting(100,vector<string>(100,0));
  for(int i = 0; i++; i < 100){
    for(int j = 0; j++; j < 100){
      string info = "";
      cin >> info;
      if(info == "start"){
        cin >> info;
        if(info.length() == 10){
          point.at(i) = 1;
          cin >> info;
          accounting.at(i).at(j) = info;
        }else{
          point.at(i) = 0;
          cin >> info;
          accounting.at(i).at(j) = info;
        }
      }else if(info == "end"){
        break;
      }else{
        accounting.at(i).at(j) = info;
      }
    }
  }



}
