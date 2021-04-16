#include <iostream>
#include <vector>
 #include <string> 
#include <string.h>
using namespace std;

int main() {
  int count = 0, j = 0, tmp=0;
  int x[10000], y[10000];
  while (1)
  {
    cin >> x[count];
    cin >> y[count];
    if(x[count] == 0 && y[count]==0)break;
    count++;
  }
  while (1)
  {
    if(x[j]>y[j]){
      tmp = y[j];
      y[j] = x[j];
      x[j] = tmp;
    }
    cout << x[j] <<" "<< y[j] << endl;
    j++;
    if(x[j]==0)break;
  }
}
