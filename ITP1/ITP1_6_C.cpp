//    created: 01.05.2021 17:44:42

#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;

#define REP(i,n) for(int i=0;i<int(n);i++)
#define REPD(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<=int(b);i++)
#define FORD(i,a,b) for(int i=a;i>=int(b);i--)

int main() {
  int A;
  int count[4][3][10];
  REP(i,4){
    REP(l,3){
      REP(j,10){
        count[i][l][j] = 0;
      }
    }
  }

  cin >> A;
  int b, f, r, v;
  REP(i,A){
    cin >> b >> f >> r >> v;
    count[b-1][f-1][r-1] += v;
  }

  REP(i,4){
    REP(l,3){
      REP(j,10){
        cout << " " <<count[i][l][j];
      }
      cout << endl;
    }
    if(i != 3) cout << "####################" <<endl;
  }
  return 0;
}