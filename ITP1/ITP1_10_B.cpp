//    created: 01.05.2021 21:09:07
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
  int a,b,c;
  cin >> a >> b >> c;
  double d,ans_s,ans_c;
	ans_s = (0.5)*a*b*sin(M_PI*c/180);
  ans_c = sqrt(a*a+b*b-2*a*b*cos(M_PI*c/180));
  cout << fixed << setprecision(8) << ans_s << endl << fixed << setprecision(8) << a+b+ans_c << endl << fixed << setprecision(8) << 2*ans_s/a <<endl;
  return 0;
}