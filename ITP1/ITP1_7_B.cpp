//    created: 02.05.2021 00:07:14

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
  int n,x;

  while (cin >> n >> x)
  {
  if(n == 0 && x == 0)return 0;
  int cnt =0;
    for(int i=1; i <=n; i++){
      for(int j=i+1; j<=n; j++){
	      for(int l=j+1;l<=n;l++){
          int sum;
          sum = i+l+j;
          if( sum ==x ) cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
  return 0;
}