//    created: 02.05.2021 23:43:56

#include <iostream>
#include <numeric>
#include <cstdio>

#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<int(n);i++)
#define REPD(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<=int(b);i++)
#define FORD(i,a,b) for(int i=a;i>=int(b);i--)

int main() {
  char s;
  while (1)
  {
    scanf("%c", &s);
    if(s == '\n') break;
    if(65<= s && s < 91){
      printf("%c", s+32);
    }else if(97<=s && s<123){
      printf("%c", s-32);
    }else{
      printf("%c", s);
    }
  }
      printf("\n");
  return 0;
}