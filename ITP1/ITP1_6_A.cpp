//    created: 19.04.2021 19:58:24

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
  cin >> A;
  vector<int>vec(A);
  REP(i, A) cin >> vec[i];
  REPD(i, A){
    cout << vec[i];
    if(i) cout << ' ';
  }
  cout << endl;
  return 0;
}