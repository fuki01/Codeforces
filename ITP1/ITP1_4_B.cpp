#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string> 

#include <iomanip>

using namespace std;

int main() {
  double r = 0;
  double area = 0, line = 0;
  cin >> r;
  area = r * r * M_PI;
  line = 2 * M_PI * r;
  cout << fixed << setprecision(6) << area << " "<<line << endl;
}
