#include <iostream>
#include <vector>
#include <string> 
#include <string.h>
using namespace std;

int main() {
  int a=0,b=0,c=0,cut=0;
  cin >> a >> b >> c;
  for (int i = a; i <= b; i++)
  {
    if (c%i == 0)
    {
      cut++;
    }
  }
  cout << cut << endl;
}
