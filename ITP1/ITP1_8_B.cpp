//    created: 03.05.2021 00:33:09

#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0;i<int(n);i++)
#define REPD(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<=int(b);i++)
#define FORD(i,a,b) for(int i=a;i>=int(b);i--)

int main(){
  string x;
  // データセットの処理
  while(1){
      cin >> x;
      if ( x == "0" ) break;
      int sum = 0;
      for ( int i = 0; i < x.size(); i++ )
          sum += x[i] - '0';
      cout << sum << endl;
  }
  return 0;
}