#include <iostream>
#include <vector>
 #include <string> 
#include <string.h>
using namespace std;

int main() {
  int count = 0, j =0;
  int x[10000];
  while (1)
  {
    cin >> x[count];
    if(x[count] == 0)break;
    count++;
  }
  while (1)
  {
    cout <<"Case "<<j+1<<": "<< x[j]<<endl;
    j++;
        if(x[j]==0)break;

  }
}
