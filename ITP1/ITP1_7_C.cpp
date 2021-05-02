//    created: 02.05.2021 00:27:21

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
  int x,y;
  cin >> x >> y;
  int array[x][y];
  int height[y], width[x];
  REP(i,x)REP(l,y) cin >> array[i][l];

  REP(i,x) width[i] = 0;
  REP(l,y) height[l] = 0;
  REP(i,x){
    REP(l,y){
     height[l] += array[i][l];
     width[i]  += array[i][l]; 
    }
  }

  REP(i,x){
    REP(l,y){
      cout << array[i][l] << " ";
    }
    cout << width[i] << endl;
  }
  int sum=0;
  REP(i,x) sum += width[i];
  REP(l,y) cout << height[l] << " ";
  cout << sum << endl;
  return 0;
}