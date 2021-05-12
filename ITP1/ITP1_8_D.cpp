//    created: 04.05.2021 23:48:09

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
  string s, p;
  cin >> s >> p;
  string tmp;
  tmp=s+s;
  int ans = -1;
  ans = tmp.find(p);
  if(ans != -1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}