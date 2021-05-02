//    created: 02.05.2021 01:01:13

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

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  // 3 2 3
  int array1[a][b],array2[b][c];
  long long result;
  REP(i,a) REP(l,b) cin >> array1[i][l];
  REP(i,b) REP(l,c) cin >> array2[i][l];
  
  for(int i=0; i<a; i++){
    for(int j=0; j<c; j++){
      result = 0;
      for(int k=0; k<b; k++){
	      result += array1[i][k]*array2[k][j];
      }
      if(j == 0){
        cout << result;
      } else {
        cout << " " << result;
      }
    }
    cout << endl;
  }
  return 0;
}