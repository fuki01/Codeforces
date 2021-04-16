//    created: 16.04.2021 18:37:11

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
  int A, B;
  while (cin >> A >> B)
  {
    REP(i, A){
      REP(j,B){
        if(i%2 == 0){
          if(j%2 == 0){
            cout << "#";
          }else{
            cout << ".";
          }
        }
        if(i%2 != 0){
          if(j%2 == 0){
            cout << ".";
          }else{
            cout << "#";
          }
        }
      }
      cout << endl;
    }
      cout << endl;
  }
  

  return 0;
}