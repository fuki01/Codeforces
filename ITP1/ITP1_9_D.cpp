//    created: 12.05.2021 09:07:16

#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;
#define REP(i,n) for(int i=0;i<int(n);i++)

int main() {
  string str;
  int A;
  cin >> str;
  cin >> A;
  REP(i, A){
    string func;
    int a, b;
    cin >> func >> a >> b;

    if ( func == "print"){
      for (int i = a; i <= b; i++) cout << str[i];
      cout << endl;
    }else if(func == "reverse"){
      string tmp;
      for (int i = a; i <= b; i++) tmp[i - a] = str[i];
      int k=0;
      for (int i = b; i >= a; i--){
        str[i] = tmp[k];
        k++;
      }
    }else if(func == "replace"){
      string tmp;
      cin >> tmp;
      for (int i = a; i <= b; i++) str[i] = tmp[i - a];
    }
  }
  return 0;
}