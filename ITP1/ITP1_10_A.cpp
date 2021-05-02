//    created: 01.05.2021 20:54:09

#include <iostream>
#include <iomanip>
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
  double X1,Y1,X2,Y2;
  cin >> X1>>Y1 >> X2 >> Y2;
  double ans;
  ans = sqrt(pow(X1-X2,2)+pow(Y1-Y2,2));
  cout << fixed << setprecision(8) << ans << endl;
  return 0;
}