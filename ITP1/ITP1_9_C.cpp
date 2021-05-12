//    created: 11.05.2021 21:46:42

#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define REP(i,n) for(int i=0;i<int(n);i++)

int main(){
  int A;
  string str1,str2;
  cin >> A;
  int t_count=0,h_count=0;

  REP(i, A){
    cin >> str1 >> str2;
    if(str1.compare(str2)==0) {
      t_count++;h_count++;
    }else if(str1.compare(str2)>0) t_count+=3;
    else h_count+=3;
  }

  cout << t_count << " " << h_count << endl;
}