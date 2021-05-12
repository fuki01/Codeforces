//    created: 12.05.2021 10:26:16

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

void func(int& a, int& b, int& c, int& d){
  int tmp = a;
  a=b;
  b=c;
  c=d;
  d=tmp;
}
void dice(vector<int>& a, char c){
  switch (c)
  {
  case 'W':
    func(a[0], a[2], a[5], a[3]);
    break;
	case 'S':
    func(a[0], a[4], a[5], a[1]);
    break;
	case 'N': 
    func(a[0], a[1], a[5], a[4]);
    break;
  case 'E':
    func(a[0], a[3], a[5], a[2]);
    break;
  }
}

int main() {
  int A;
  cin >> A;
  vector<int>vec(6);
  REP(i,6) cin >> vec[i];
  string s;
  cin >> s;
  REP(i, s.length()) dice(vec, s[i]);
  cout << vec[0] << endl;
}