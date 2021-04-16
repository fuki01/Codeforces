#include <iostream>
#include <vector>
#include <iomanip>
#include <string> 
#include <string.h>
using namespace std;

int main() {
  int a = 0, b = 0, d = 0, r = 0;
  double f = 0;
  cin >> a >> b;
  d = a / b;
  r = a % b;
  f = (double)a / (double)b;
  cout << d << " " << r << " "<< fixed << setprecision(5) << f << endl;
}
