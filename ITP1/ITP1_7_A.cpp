//    created: 01.05.2021 23:31:43

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
  int m, f, r;
  while(cin >> m >> f >> r){
    int sum = m + f;
    if(!(m == -1 && f == -1 && r == -1)){

      if( m == -1 || f == -1 ){
        cout << "F" << endl;
      }else if(sum >= 80){
        cout << "A" << endl;
      }else if(sum >= 65 && 80 >sum){
        cout << "B" << endl;
      }else if(sum >= 50 && 65 >sum){
        cout << "C" << endl;
      }else if(sum >= 30 && 50 >sum){
        if(r >= 50){
          cout << "C" << endl;
        }else{
          cout << "D" << endl;
        }
      }else if(sum < 30) cout << "F" << endl;
    }
  }
  return 0;
}