//    created: 11.05.2021 17:07:53

#include <iostream>
#include <iomanip>
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
  vector<int>vec2(A);

  REP(i,A){
   cin >> vec[i];
   cin >> vec2[i];
  }

  double fa=0,fa2=0,fa3=0,oe=0;
  REP(i,A){
    fa  += fabs(vec[i] - vec2[i]);
    fa2 += pow(fabs(vec[i]-vec2[i]),2);
    fa3 += pow(fabs(vec[i]-vec2[i]),3);
    oe   = max(oe,fabs(vec[i]-vec2[i]));
  }

  cout << fixed << setprecision(10) << fa << endl;
  cout << fixed << setprecision(10) << sqrt(fa2) << endl;
  cout << fixed << setprecision(10) << pow(fa3, 1.0/3.0) << endl;
  cout << fixed << setprecision(10) << oe << endl;
  return 0;
}