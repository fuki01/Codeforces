//    created: 11.05.2021 16:41:41

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
    int data;
    while (1)
    {
      int A;
      cin >> A;
      vector<int>vec(A);
      if(A == 0) break;
      REP(i, A) cin >> vec[i];
      int n = vec.size(); 
      double avg, dev, sum = 0.0, sum2 = 0.0;
      for (int i = 0; i < n; i++) {
          sum  += vec[i];
          sum2 += vec[i]*vec[i];
      }
      avg = sum/n;
      dev = sqrt(sum2/n - avg*avg);
      cout << fixed << setprecision(10) << dev << endl;
    }
}