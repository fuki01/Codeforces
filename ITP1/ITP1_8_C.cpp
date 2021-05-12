//    created: 03.05.2021 01:29:45

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
  string str;
  int az_array[26] = {};
  while (getline(cin,str)){
    REP(i, str.size()){
      if('a'<=str[i] && str[i]<='z'){
        az_array[str[i]-'a']++;
      }else if('A'<=str[i] && str[i]<='Z'){
        az_array[str[i] - 'A']++;
      }
    }
  }
  
  REP(i, 26) cout << (char)('a'+i) << " : " << az_array[i] << endl;

  return 0;
}