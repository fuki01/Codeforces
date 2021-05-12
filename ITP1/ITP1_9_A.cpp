//    created: 11.05.2021 16:50:07

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

int main(void){
  int cnt=0;
  string w,s;cin>>w;
  while(cin>>s){
    if(s=="END_OF_TEXT") break;
  	string s1,w1;
  	REP(i, s.size()) s1+=tolower(s[i]);
    REP(i, w.size()) w1+=tolower(w[i]);
  	if(s1==w1)++cnt;
  }
  cout<<cnt<<endl;
  return 0;
}
